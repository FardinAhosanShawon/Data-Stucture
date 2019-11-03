#include<stdio.h>
#include<stdlib.h>
void print();
struct node{
    int data;
    struct node* link;
};
typedef struct node node;
node* head=NULL;
int main()
{
    insertionFirst(2);
    insertionFirst(4);
    insertionFirst(6);
    print();
    return 0;
}
insertionFirst(int value)
{
	//four steps are constant
   node* newnode=(node*) malloc(sizeof(node));
   newnode->data=value;
   newnode->link=head;
   head=newnode;
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
