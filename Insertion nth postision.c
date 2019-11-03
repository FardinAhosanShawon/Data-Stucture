#include<stdio.h>
#include<stdlib.h>
void print();
struct node{
    int data;
    struct node* link;
};
typedef struct node node;
node* head=NULL;
int count=0;
int main()
{
    insertion(2,0);
    insertion(4,0);
    insertion(6,1);
    insertion(8,2);
    insertion(10,4);
    print();
    return 0;
}
void insertion(int value,int pos)
{
    count++;
	node *temp=head;
	if(pos<0 || pos> count)
    {
        return;
    }
    node *newnode=(node*)malloc(sizeof(node));
    newnode->data=value;
    if(pos==0)
    {
        newnode->link=head;
        head=newnode;
    }
    else
    {
        int i;
        for(i=0 ;i<pos-1;i++)
        {
            temp=temp->link;
        }
        newnode->link=temp->link;
        temp->link=newnode;

    }
}
void print()
{
    node* temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }
}

