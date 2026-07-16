/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++,printf("\n"))
    {
        for(j=0;j<n;j++)
        if(i==j ||i+j==n-1)
        printf("%d",j);
        else
        printf(" ");
    }
}

o/p
0   4
 1 3
  2
 1 3
0   4