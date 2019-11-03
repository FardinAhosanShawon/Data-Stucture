#include<stdio.h>
struct my{
    int data;
    struct my *link;
};
struct my *head=NULL;
int count=0;
int main()
{
    insertionEnd(10);
    insertionEnd(20);
    insertionEnd(30);
    print();
    size();
    return 0;
}
void insertionEnd(int value)
{
    struct my *newnode=(struct my*)malloc(sizeof(struct my));
    newnode->data=value;
    newnode->link=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else{

        struct my *temp=head;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=newnode;
    }
    count++;
}
void print()
{
    struct my *temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }
}
void size()
{
    printf("Linkedlist size=%d\n",count);
}
