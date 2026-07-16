import os
from github import Github
from github import GithubException

# 1. Configuration variables
GITHUB_TOKEN = os.environ.get("GITHUB_TOKEN")
REPO_NAME = "jeeva201201-sketch/cc-training-"  # Format: "owner/repository"
BRANCH = "master"                            # Target branch

def push_file_to_github():
    # 2. Authenticate with GitHub
    if not GITHUB_TOKEN:
        print("Error: Set the GITHUB_TOKEN environment variable before running this script.")
        return
    g = Github(GITHUB_TOKEN)
    
    try:
        repo = g.get_repo(REPO_NAME)
    except Exception as e:
        print(f"Error accessing repository: {e}")
        return

    # 3. Get the local file path from the user
    local_file_path = input("Enter the path of the file you want to upload: ").strip()
    
    # Clean quotes if user dragged and dropped the file into the terminal
    local_file_path = local_file_path.strip("'\"")

    if not os.path.exists(local_file_path):
        print("Error: The specified file does not exist.")
        return

    # 4. Determine the file name and read its content
    file_name = os.path.basename(local_file_path)
    with open(local_file_path, "rb") as file:
        file_content = file.read()

    # 5. Push the file to GitHub (Handles creating or updating)
    commit_message = f"Automated upload of {file_name}"
    
    try:
        # Check if the file already exists in the repository to update it
        contents = repo.get_contents(file_name, ref=BRANCH)
        repo.update_file(
            path=file_name,
            message=commit_message,
            content=file_content,
            sha=contents.sha,
            branch=BRANCH
        )
        print(f"Successfully updated '{file_name}' in {REPO_NAME} on branch '{BRANCH}'.")
        
    except GithubException as e:
        # If the file does not exist (404), create it as a new file
        if e.status == 404:
            repo.create_file(
                path=file_name,
                message=commit_message,
                content=file_content,
                branch=BRANCH
            )
            print(f"Successfully created and pushed '{file_name}' to {REPO_NAME} on branch '{BRANCH}'.")
        else:
            print(f"An error occurred while pushing to GitHub: {e}")

if __name__ == "__main__":
    push_file_to_github()
