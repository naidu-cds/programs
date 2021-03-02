#include<stdio.h>

int main()
{
    int arr[10],i;
    int big=0;
    printf("enter array elements");
   for(i=0;i<11;i++){
    scanf("%d",&arr[i]);
    if(arr[i]>big)
    big=arr[i];
   }
    printf("%d is biggest",big);
   return 0;
}