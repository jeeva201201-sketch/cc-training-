#include <stdio.h>
#include<string.h>
int add(int a,int b)
{
    //printf("%d",a+b);
    return a+b;
}
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("%d",c);
}