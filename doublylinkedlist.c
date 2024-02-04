#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node*next;
struct node*prev;
}n;
n* head, *temp,*newp,*ptr;
void display(n*head)
{
    if(head==NULL)
    {
        printf("empty list");
    }
    temp=NULL;
    temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
void insertionat_beg()
{
    int value;
    printf("enter the number");
    scanf("%d",&value);
    newp=(n*)malloc(sizeof(n));
    newp->data=value;
    newp->prev=NULL;
    newp->next=head;
    head=newp;
}
void insrtionat_last(){
 int value;
 printf("enter the number");
    scanf("%d",&value);
    newp=(n*)malloc(sizeof(n));
    newp->data=value;
    newp->next=NULL;
    ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    newp->prev=ptr;
    ptr->next=newp;
}
void insertionat_middle(){
int value,pos,i=1;
 printf("enter the number");
    scanf("%d",&value);
    newp=(n*)malloc(sizeof(n));
    newp->data=value;
    newp->next=NULL;
    printf("enter the position");
    scanf("%d",&pos);
    ptr=head;
    while(i<pos-1)
    {
        ptr=ptr->next;
    }
    newp->next=ptr->next;
    newp->prev=ptr;
    ptr->next=newp;
    ptr->next->prev=newp;
}
int main()
{
    int ch=0;
    head=NULL;
    while(1)
    {
         int ch=0;
        printf("1.insertion at beginig\n2.insertion at end\n3.insertion at position\n4.display\n5.exit");
        scanf("%d",&ch);

            if(ch==1)
            {
              insertionat_beg();
            }
             else if(ch==2)
            {
                insrtionat_last();
            }
            else if(ch==3)
            {
              insertionat_middle();
            }
            else if(ch==4)
            {
                display(head);
            }
            else
        exit(1);


    }
    return 0;
}
