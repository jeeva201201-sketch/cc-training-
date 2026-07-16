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
        printf("%d%d ",i,j);
    }
}
o/p
5
00 01 02 03 04 
10 11 12 13 14 
20 21 22 23 24 
30 31 32 33 34 
40 41 42 43 44 
