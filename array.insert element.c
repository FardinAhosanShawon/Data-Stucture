#include<stdio.h>
int main()
{
    int arr[100],n,key,pos,i;
    printf("entered your arry element number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("element-%d:",i);
        scanf("%d",&arr[i]);
    }
    printf("entered your inserted number:");
    scanf("%d",&key);
    printf("entered your inserted value position:");
    scanf("%d",&pos);
    int j=n;
    while(j>=pos)
    {
        arr[j]=arr[j-1];
        j--;
    }
    arr[pos-1]=key;


    printf("your new array is :");
    for(i=0;i<n+1;i++)
        {
            printf("%d ",arr[i]);
        }
    return 0;
}
