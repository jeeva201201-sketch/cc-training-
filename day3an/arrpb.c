#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n] ;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   int sum=0;
   for(int i=0;i<n;i++)
   {
    sum=sum+arr[i];

   }
   int ac=0;
   for(int i=0;i<n;i++)
   {
    ac=ac+arr[i];
    arr[i]=sum-ac;
printf("%d ",&arr[i]);
   }
  
    return 0;
}