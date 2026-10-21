#include<stdio.h>
int main()
{
    int i,n,b,a[100];
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)//this is for reading  an array initially
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)//this is for printing the elements after reading from the array
    {
        printf("%d",a[i]);
    }
    printf("Enter the value of b: ");//entering the element value that for checking
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(a[i]==b)//here b is the position of the element
        {
            printf("Element found at %d",i);
            break;
        }
    }
    return 0;
}
