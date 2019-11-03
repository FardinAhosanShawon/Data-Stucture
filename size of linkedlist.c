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

void add(struct node *temp)
{
    int sum=0;
    while(temp!=NULL)
    {
        sum=sum+temp->data;
        temp=temp->link;
    }
    printf("\nSum is :%d",sum);
}
///recursivly
int RAdd(struct node* p)
{
    int sum=0;
    if(p==NULL)
    {
        return 0;
    }
    else{

        return (RAdd(p->link)+p->data);
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
    add(head);
    printf("\nRecursively sum is:%d",RAdd(head));


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

