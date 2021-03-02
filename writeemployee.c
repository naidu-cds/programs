#include<stdio.h>
struct employee
{
    int empid;
    char empname[20];
    char empcmpny[20];
}obj1[10];
int main()

{
    int i;
    for(i=0;i<3;i++)
    {
        printf("enter empid,empname,empcmpny \n");
        scanf("%d %s %s",&obj1[i].empid,&obj1[i].empname,&obj1[i].empcmpny);
    }
     /*   for(int i=0;i<3;i++)
    {
        //printf("enter empid,empname,empcmpny");
        printf("%d %s %s",obj1[i].empid,obj1[i].empname,obj1[i].empcmpny);
    }*/
    
       FILE *fp;
        fp=fopen("employeedb","wb");
        for(i=0;i<3;i++)
        {
            fwrite(&obj1[i],sizeof(obj1),1,fp);
            
            
        }
        fclose(fp);
        
     
}
