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
void max(struct node *p)
{
    int m=-32768; //MIN-INT based on 2 bytes int
    while(p) //p!=NULL
    {
        if(p->data>m)
        {
            m=p->data;
        }
        p=p->link;
    }
    printf("\n max element is:%d",m);
}
int main()
{
    insertionEnd(30);
    insertionEnd(20);
    insertionEnd(10);
    insertionEnd(0);
    display(head);
    printf("\n");
    max(head);


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

