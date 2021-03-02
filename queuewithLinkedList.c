void insert();
void delete();
void print();
#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *link;
};
typedef struct node ll;
ll *temp,*new;
ll *first=NULL;
int data;
void main()
{
    int ch;
    while(1)
    {
        printf("\n----------QUEUE USING LINKED LIST----------");
        printf("\n1.Insert\n2.Delete\n3.Print\n4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
       {
           case 1:insert();
                  break;
           case 2:delete();
                  break;
           case 3:print();
                  break;
           case 4:exit(1);
                  break;
        }
    }
}
void insert()
{
   if(first==NULL)
   {
       first=(ll *)malloc(sizeof(ll));
       printf("\nEnter the data:");
       scanf("%d",&data);
       first->data=data;
       first->link=NULL;
   }
    else
    {
       new=(ll *)malloc(sizeof(ll));
       printf("\nEnter the data:");
       scanf("%d",&data);
       temp=first;
       while(temp->link!=NULL)
       {
           temp=temp->link;
       }
       temp->link=new;
       new->data=data;
       new->link=NULL;
    }
}
void delete()
{
   if(first==NULL)
    {
        printf("\nList is emp");
    }
    else if(first->link==NULL)
    {
        printf("\nThe first node %d is deleted:",first->data);
        temp=first;
        first=NULL;
        free(first);
    }
    else
    {
        temp=first;
        first=first->link;
        printf("\nThe node %d is deleted",temp->data);
        free(temp);
    }
    
}
void print()
{
    if(first==NULL)
    {
        printf("\nList is empty ");
     }
     else
     {
        temp = first;
        while(temp != NULL)
        {
            printf(" [%d %u]-> \t",temp->data,temp->link);
            temp = temp -> link;
        }
     }
}