#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;
void create();
void display();
void insertatbeg();
void insertatend();
void insertatspec();
void delatbeg();
void delatend();
int main()
{
    int opt,n,i;
    while(1)
    {
        printf("\n1.create\n2.display\n3.insertatbeg\n4.exit\n5.inseratend\n6.insertatspec\n7.delatbeg\n8.delatend");
        printf("\nenter your option");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1: printf("\n enter no.of nodes");
            scanf("%d",&n);
            for(i=1;i<=n;i++)
            {
                create();
            }
            break;
            case 2: display();
            break;
            case 3: insertatbeg();
            break;
            case 4:exit(0);
            case 5:insertatend();
            break;
            case 6:  insertatspec();
            break;
            case 7:delatbeg();
            break;
            case 8: delatend();
            break;
            default: Invalid Option;
        }
    }
}
void create()
{
    struct node *newnode,*ptr;
    int ele;
    printf("enter element");
    scanf("%d",&ele);
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=ele;
    if(start==NULL)
    {
        start=newnode;
        newnode->next=start;
    }
    else
    {
        ptr=start;
        while(ptr->next!=start)
        {
            ptr=ptr->next;
        }
        newnode->next=start;
        ptr->next=newnode;
       
       
    }
}
void display()
{
    struct node *ptr;
    ptr=start;
    while(ptr->next!=start)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("%d->",ptr->data);
   
}
void insertatbeg()
{
    struct node *ptr,*newnode;
    int ele;
    printf("enter element");
    scanf("%d",&ele);
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=ele;
    if(start==NULL)
    {
        start=newnode;
        newnode->next=start;
    }
    else
    {
     
      ptr=start;
      while(ptr->next!=start)
      {
           ptr=ptr->next;
      }
      newnode->next=start;
      start=newnode;
      ptr->next=start;
      }
       
}
void insertatend()
{
    struct node *ptr,*newnode;
    int ele;
    printf("enter element");
    scanf("%d",&ele);
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=ele;
    if(start==NULL)
    {
        start=newnode;
        newnode->next=start;
    }
    else
    {
     
      ptr=start;
      while(ptr->next!=start)
      {
           ptr=ptr->next;
      }
      ptr->next=newnode;
      newnode->next=start;
      }
       
}
void insertatspec()
{
    struct node *ptr=start,*newnode;
    int ele,loc,i;
    printf("enter element");
    scanf("%d",&ele);
    printf("\nenter loacation after which node you want to insert");
    scanf("%d",&loc);
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=ele;
    for(i=1;i<loc;i++)
    {
        ptr=ptr->next;
    }
     
      newnode->next=ptr->next;
      ptr->next=newnode;
}
void delatbeg()
{
    struct node *ptr=start;
    if(start==NULL)
    {
        printf("list is empty");
    }
    else
    {
         if(start->next==start)
         {
             start=NULL;
             free(ptr);
         }
         else
         {
            
      
   start=ptr->next;
       
         }
         free(ptr);
         
    }
}
void delatend()
{
    struct node *ptr1=start,*ptr2;
    if(start==NULL)
    {
        printf("list is empty");
    }
    else
    {
         if(start->next==start)
         {
             start=NULL;
             
         }
         else
         {
            
             
      while(ptr1->next!=start)
      {
          ptr2=ptr1;
           ptr1=ptr1->next;
      }
      ptr2->next=start;
       
         }
   free(ptr1);
         
    }
}