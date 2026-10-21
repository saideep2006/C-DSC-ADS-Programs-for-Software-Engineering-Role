#include<stdio.h>
int main()
{
    //insertion of an element in an array at beginning
    int a[10],i,n,k;
    printf("Enter the size(n) of the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);//reading of an array
    }
    printf("Enter the inserted element:");
    scanf("%d",&k);
    for(i=n-1;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    a[0]=k;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}