#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
}*head=NULL;
typedef struct node node;
void InsertionSort()
{
    node *newNode=(node*)malloc(sizeof(node));
    scanf("%d",&newNode->data);
    newNode->link=NULL;

    if(head==NULL || head->data >=newNode->data)
    {
        newNode->link=head;
        head=newNode;

    }
    else
    {
        node *p=head;
        node*tail=NULL;
        while(p!=NULL && newNode->data >=p->data)
        {
            tail=p;
            p=p->link;


        }
        tail->link=newNode;
        newNode->link=p;


    }
}
void print()
{
    node* temp=head;
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
}
int main()
{
    int n;
    int i=0;
    InsertionSort();
    InsertionSort();
    InsertionSort();
    InsertionSort();
     printf("Element is:");
    print();
    printf("\nHow many node are inserted:");
    scanf("%d",&n);
   while(i<n){
        InsertionSort();
       i++;
    }
    printf("Element is:");
    print();

}
