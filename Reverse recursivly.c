#include<stdio.h>
#include<stdlib.h>
void insertionEnd(int value);

//void display(struct node *temp);
struct node
{
    int data;
    struct node*link;
}*head=NULL;
int count=0;
///recursively
void RDisplay(struct node *temp)
{
    if(temp!=NULL)
    {
        RDisplay(temp->link);
        printf("%d ",temp->data);
        //RDisplay(temp->link);
    }
}
int size(struct node *p)
{
    while(p!=NULL)
    {
        count++;
        p=p->link;
    }
    return count;
}
//recursivly size
int RSize(struct node *p)
{
    if(p==NULL)
    {
        return 0;
    }
    else{
        return RSize(p->link)+1;
    }
}
int main()
{
    insertionEnd(30);
    insertionEnd(20);
    insertionEnd(10);
    insertionEnd(0);
    display(head);
    printf("\n");
    RDisplay(head);
    int n=size(head);
    printf("\nsize is:%d",n);
    printf("\nRecurrsivly size:%d",RSize(head));

}
void insertionEnd(int value)
{
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p->data=value;
    p->link=NULL;
    if(head==NULL)
    {

        head=p;
    }
    else{

        struct node *temp=head;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=p;

    }
}
void display(struct node *temp)
{
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->link;;
    }
}

