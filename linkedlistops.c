void insertBeg();
void insertEnd();
void insertPos(int data,int pos);
void delBeg();
void delEnd();
void delPos();
void search(int key);
void print();
#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *link;
};
typedef struct node ll;
ll *temp,*new,*cur,*prev;
ll *first=NULL;
int data=0,cnt=0;
int key;
int pos;
void main()
{
    int ch;
    while(1)
    {
        printf("\n----------LINKED LIST----------");
        printf("\n1.Insert beg\n2.Insert End\n3.Insert at a position\n");
        printf("4.Delete beg\n5.Delete End\n6.Delete from a position\n");
        printf("7.search\n8.print\n9.exit\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
       {
           case 1:insertBeg();
                  break;
           case 2:insertEnd();
                  break;
           case 3:printf("\nEnter the data:");
                  scanf("%d",&data);
                  printf("\nEnter the position:");
                  scanf("%d",&pos);
                  insertPos(data,pos);
                  break;
           case 4:delBeg();
                  break;
           case 5:delEnd();
                  break;
           case 6:printf("\nEnter the position:");
                  scanf("%d",&pos);
                  delPos(pos);
                  break;
           case 7:printf("\nEnter the data to search:");
                  scanf("%d",&key);
                  search(key);
                  break;
           case 8:print();
                  break;
           case 9:exit(1);
                  break;
        }
    }
}
void insertBeg()
{
    if(first==NULL)//if the list is empty
    {
        first=(ll *)malloc(sizeof(ll));
        cnt++;
        printf("\nEnter the data:");
        scanf("%d",&data);
        first->data=data;
        first->link=NULL;
    }
    else
    {
       temp=(ll *)malloc(sizeof(ll));
       cnt++;
       printf("\nEnter the data:");
       scanf("%d",&data);
       temp->data=data;
       temp->link=first;
       first=temp;
    }
}
void insertEnd()
{
   if(first==NULL)
   {
       first=(ll *)malloc(sizeof(ll));
       printf("\nEnter the data:");
       scanf("%d",&data);
       first->data=data;
       first->link=NULL;
       cnt++;
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
       cnt++;
    }
}
void insertPos(int data,int pos)
{
    temp=(ll *)malloc(sizeof(ll));
    temp->data=data;
    int i;
    cur=first;
    if(pos==1)
        {
        	temp->link=cur;
    		first=temp;
    		cnt++;
    		return;
    	}
    for(i=1;i<pos-1;i++)  //moving to the (n-1)th position node in the linked list
    	{
        	cur=cur->link;
    	}
    temp->link=cur->link;  //Make the newly created node point to next node of ptr temp
    cur->link=temp; 
	cnt++;
}
void delBeg()
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
        cnt--;
    }
    else
    {
        temp=first;
        first=first->link;
        printf("\nThe node %d is deleted",temp->data);
        free(temp);
        cnt--;
    }
    
}
void delEnd()
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
        cnt--;
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
       printf("\nLast node %d is deleted",temp->data);
       free(temp);
       cnt--;
       prev->link=NULL;
    } 
}
void delPos(int pos)
{
    if(pos>cnt+1)
    {
        printf("\nInvalid position");
        return;
    }
    else if(first==NULL)
    {
        printf("\nList is emp");
        return;
    }
    cur=NULL;
    temp=first;
    for(int i=1;i<pos;i++)
    {
        cur=temp;
        temp=temp->link;
    }
    cur->link=temp->link;
    printf("\nNode %d is deleted",temp->data);
    free(temp);
    cnt--;
}
void search(int key)
{
    cur=first;
    while(cur!=NULL)
    {
        if(cur->data==key)
        {
            printf("\nData found in the list");
            return;
        }
        cur=cur->link;
    }
    printf("\nData not found");
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