#include<stdio.h>
int main()
{
    //deleting an array elememt from beginning
    int a[20],i,n,k;
    printf("Enter the size(n):");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be deleted:");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}