#include<stdio.h>
int main()
{
    int n,pos,item,i;
    printf("enter your array element:");
    scanf("%d",&n);
    int arr[n];
    printf("\nenter array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter your insert value:");
    scanf("%d",&item);
    printf("enter your insertion value position:");
    scanf("%d",&pos);
    for(i=n;i>=pos-1;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=item;
    printf("after insertion:\n");
    for(i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
}
