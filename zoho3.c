#include <stdio.h>
#include <string.h>

void fixParens(char *s) {
    char temp[100], res[100];
    int i, j = 0, open = 0;
    for (i = 0; s[i]; i++) {
        if (s[i] == '(') open++;
        if (s[i] == ')') {
            if (open == 0) continue;
            open--;
        }
        temp[j++] = s[i];
    }
    temp[j] = '\0';
    int close = 0, k = 0;
    for (i = j - 1; i >= 0; i--) {
        if (temp[i] == ')') close++;
        else if (temp[i] == '(') {
            if (close == 0) continue;
            close--;
        }
        res[k++] = temp[i];
    }
    for (i = k - 1; i >= 0; i--) putchar(res[i]);
    printf("\n");
}

int main() {
    fixParens("((abc)((de))");  
         
    return 0;
}
