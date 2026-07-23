#include <stdio.h>
int ascending(int ac[], int ass) {
    for(int i = 0; i < ass; i++) {
        for(int j = i + 1; j < ass; j++) {
            if(ac[i] > ac[j]) {
                int temp = ac[i];
                ac[i] = ac[j];
                ac[j] = temp;
            }
        }}
    return 0;
}
int descending(int ds[], int des) {
    for(int i = 0; i < des; i++) {
        for(int j = i + 1; j < des; j++) {
            if(ds[i] < ds[j]) {
                int temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
    return 0; 

}[]
int main() {
    int n;
     scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int ac[100],ds[100];
    int ass=0,des=0;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            ac[ass] = arr[i];
            ass++;
        }
        else {
            ds[des] = arr[i];
            des++;
        }


    }
    ascending(ac, ass);
    descending(ds, des);
    int ad=0,da=0;
    for(int i = 0; i < n; i++) {
       if(i%2 == 0) {

        arr[i] = ac[ad];
        ad++;
       }
       else {
            arr[i] = ds[da];
            da++;
       }
    }
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
#include <stdio.h>
int main()
{
 int main;
 scanf("%d",&main);
 (main%9==0)?printf("9"):printf("%d",(main%9));

    
}
