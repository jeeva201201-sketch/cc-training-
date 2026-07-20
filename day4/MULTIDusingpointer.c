#include <stdio.h>
#include<stdlib.h>
  
int main()
{
    int r,c,i,j;
    scanf("%d%d",&r,&c);
    int arr[r][c],*a;
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    scanf("%d",&arr[i][j]);
    a=&arr[0][0];
    for(i=0;i<r;i++,printf("\n"))
    for(j=0;j<c;j++)
    printf("%d ",*((a)+(i*c)+j));

    return 0;
}