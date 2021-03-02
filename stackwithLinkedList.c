void push();
void pop();
void print();
#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *link;
};
typedef struct node ll;
ll *temp,*new,*prev;
ll *first=NULL;
int data;
void main()
{
    int ch;
    while(1)
    {
        printf("\n----------STACK USING LINKED LIST----------");
        printf("\n1.Push\n2.Pop\n3.Print\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
       {
           case 1:push();
                  break;
           case 2:pop();
                  break;
           case 3:print();
                  break;
           case 4:exit(0);
                  break;
        }
    }
}
void push()
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

void pop()
{
   if(first==NULL)
    {
        printf("\nList is empty");
    }
    else if(first->link==NULL)
    {
        printf("\nNode %d is deleted",first->data);
        temp=first;
        first=NULL;
        free(first);
    }
    else
    {
       prev=NULL;
       temp=first;
       while(temp->link!=NULL)
       {
           prev=temp;
           temp=temp->link;
       }
       printf("\nnode %d is deleted",temp->data);
       free(temp);
       prev->link=NULL;
    } 
}
void print()
{
    if(first == NULL)
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