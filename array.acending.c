/* Write a program in C to merge two arrays of same size sorted in decending order. Go to the editor
Test Data :
Input the number of elements to be stored in the first array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Input the number of elements to be stored in the second array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Expected Output :
The merged array in aecending order is :
3 3 2 2 1 1 */
#include<stdio.h>
int main()
{
    int arr1[100],arr2[100],arr3[200];
    int i,j,temp,n1,n2;
    printf("entered the th element of 1st array\n");
    scanf("%d",&n1);
    printf("entered the first  array element\n");
    for(i=0;i<n1;i++)
    {
        printf("element-%d:",i);
        scanf("%d",&arr1[i]);

    }
    printf("entered the th element of 2nd array\n");
    scanf("%d",&n2);
    printf("entered the second  array element\n");
    for(i=0;i<n2;i++)
    {
        printf("element-%d:",i);
        scanf("%d",&arr2[i]);

    }
    //array1 and array2 coppying array3
    for(i=0;i<n1;i++)
    {
        arr3[i]=arr1[i];
    }
    for(j=0;j<n2;j++)
    {
        arr3[i]=arr2[j];
        i++;
    }

    int n3;
    n3=n1+n2;
    //aeccending
    for(i=0;i<n3;i++)
    {
        for(j=0;j<n3-1;j++)
        {
            if(arr3[j]>=arr3[j+1])
            {
                temp=arr3[j];
                arr3[j]=arr3[j+1];
                arr3[j+1]=temp;

            }
        }
    }
    printf("the aecending order is:");
    for(i=0;i<n3;i++)
    {
        printf("%d ",arr3[i]);
    }
    printf("\n\n");
    return 0;
}

