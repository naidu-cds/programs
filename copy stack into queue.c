#include<stdio.h>

int stack[5];
int queue[5];
int top=-1,front=0;rear=-1,choice,size=6,data;

int main()
{
    while(choice!=3){
        menu();
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            if(top==size-1){
                printf("stack full\n");
                break;
            }
            else
            {
                push();
                break;
            }
            
            case 2:
            print();
            break;
            
            case 3:
            exit(0);
            break;
            
            default :printf("wrong choice\n");
            break;
        }
    }
}
menu(){
    printf("enter the choice\n");
    printf("1.push\n2.print\n3.exit\n");
}
void push()
{
    printf("entert the elements into stack\n");
    scanf("%d",&data);
    top++;
    stack[top]=data;
    rear++;
    queue[rear]=stack[top];
    printf("element copied\n");
    
}
void print(){
    for(int i=top;i>=0;i--){
        printf("%d ",stack[i]);
    }
    printf("\n");
    for(int i=front;i<=rear;i++){
        printf("%d ",queue[front]);
        front++;
    }
}