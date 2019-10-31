#include<stdio.h>
int main()
{
    int n,temp,i;
    printf("enter your array element number:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("element %d:",i);
        scanf("%d",&arr[i]);

    }
    int key,pos=-1;/// searching element....pos for position of value
    printf("entered your searching element:");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        printf("value is not found");
    }
    else
    {
        printf("the value is found at %d position",pos);
    }
    return 0;
}
