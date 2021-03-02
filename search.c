#include <stdio.h>
int main()
{ 
    int s,flag=0;
    int *p;
    p=(int *) malloc(sizeof(int)*10);
    printf("Enter the elements of array\n");
    for(int i=0;i<10;i++)
    scanf("%d",&p[i]);
    printf("Enter the element to be searched\n");
    scanf("%d",&s);
    for(int i=0;i<10;i++)
    if(s==p[i])
    {
        flag=1;
        break;
    }
    if(flag==1)
    printf("The element is found\n");
    else
    printf("The element is not found\n");
    return 0;
}