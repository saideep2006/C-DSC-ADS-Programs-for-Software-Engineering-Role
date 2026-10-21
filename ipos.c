#include<stdio.h>
int main()
{
    //inserting the element in the array at any position
    int a[10],i,n,pos,k;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the number of elements in the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position where the element to be inserted:");
    scanf("%d",&pos);
    printf("Enter the element to be inserted:");
    scanf("%d",&k);
    for(i=n-1;i>pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=k;
    printf("Printing the final array after insering the element at required place:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}