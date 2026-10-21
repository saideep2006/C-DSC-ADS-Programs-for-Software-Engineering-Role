#include<stdio.h>
int main()
{
    //finding total negative numbers count in a array
    int n,i,c=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("reading the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            c++;
        }
    }
    printf("The total negative numbers in the array is %d",c);
    return 0;
}