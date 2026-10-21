#include<stdio.h>
int main()
{
    //reading ana array elements
    int i,n;
    printf("Enter the number if rows:");
    scanf("%d",&n);
    int a[n];
    printf("Read the elements one by one\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Entered elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
return 0;
}