#include<stdio.h>
struct Node{
    int data;

    struct Node *link;

};
struct Node *head=NULL;
int count=0;
int main()
{
    insert(10);
    insert(100);
    insert(50);
    insert(10);
    print();
    size();
    deleteNode(2);
    printf("\n\n");
    print();
    size();
    deleteNode(1);
    printf("\n\n");
    print();
    size();
}
void deleteNode(int pos)
{
    int i;
    if(pos==1)
    {
        struct Node *temp=head;
        head=head->link;//head->link ta j dike point kore ache head o sei dike point kore thakbe
        free(temp);
    }
    else
    {
        struct Node *temp1=head;
        struct Node *tail=NULL;
        for(i=1;i<=pos-1;i++)
        {
            tail=temp1;
            temp1=temp1->link;
        }
        //struct Node *temp2=temp1->link;
        tail->link=temp1->link;
        free(temp1);
    }
    count--;

}
void insert(int value){
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->link=NULL;

    if(head==NULL)
    {
        head=newNode;
    }
    else{
            struct Node *temp=head;
            while(temp->link!=NULL)
            {
                temp=temp->link;
            }
            temp->link=newNode;
        }
    count++;
}
void print(){
    struct Node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
}
void size(){
    printf("count=%d",count);
}

