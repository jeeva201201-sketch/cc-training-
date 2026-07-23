#include <stdio.h>
#include <string.h>

void reverseWord(char *str) {
    if (*str == '\0')
        return;
    char *space = strchr(str, ' ');
    
    if (space != NULL) {
        *space = '\0';  
        reverseWord(space + 1); 
        printf("%s ", str);      
    } else {
        
        printf("%s ", str);
    }
}

int main() {
    char str[] = "I love india";  

   
    reverseWord(str);
    printf("\n");

    return 0;
}
