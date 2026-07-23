#include <stdio.h>
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int a;
    scanf("%d", &a);
    a= a % 5;

    for (int i = 0; i < a; i++) {
        int temp = arr[0];
        for (int j = 0; j < 4; j++) {
            arr[j] = arr[j + 1];
        }
        arr[4] = temp;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}