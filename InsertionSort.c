#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *link;
};
struct Node *head=NULL;
int main()
{
    insert(3);
    insert(2);
    insert(6);
    insert(10);
    //insert(1);
    //insert(8);
    print();
}
void insert(int value)
{
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;

    if(head==NULL || newNode->data <= head->data)//insertion first
    {
        newNode->link=head;//newNode->link ta head j dike point kore ache oidike point kore thakbe
        head = newNode;//head newNOde er dike point kore thakbe
    }

    else{
        struct Node *temp,*temp2;

        for(temp=head;temp!=NULL && newNode->data <= temp->data;temp=temp->link)
        {
            temp2=temp;

        }

        newNode->link=temp;
        temp2->link=newNode;



    }
}
void print()
{
    struct Node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
}


