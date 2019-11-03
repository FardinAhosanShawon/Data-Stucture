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
void find(int value)
{
    struct node *temp=head;
    int pos=0;
    while(temp!=NULL)
    {
        if(temp->data==value)
        {
            printf("%d found in %d position",value,pos+1);
            break;
        }
        pos++;
        temp=temp->link;
    }
    if(pos==count)
    {
        printf("not found");
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
    find(10);


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
    count++;
}
void display(struct node *temp)
{
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->link;;
    }
}

