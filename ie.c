#include<stdio.h>
int main()
{
    //inserting the element in the array from the end
    int n,a[20],i,k;
    printf("Enter the size of the array(n-value):");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    n++;
    printf("enter the k value:");
    scanf("%d",&k);
    a[i]=k;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}