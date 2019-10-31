#include<stdio.h>
int main()
{
    int arr[100],n,pos,i,temp;
    printf("entered your arry element number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("element-%d:",i);
        scanf("%d",&arr[i]);
    }

    printf("entered your deleted value position:");
    scanf("%d",&pos);
    temp=arr[pos-1];
    for(i=pos-1;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n=n-1;
    printf("your new arry:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;

}
