#include<stdio.h>
int minmax(int n, int arr[])
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return min, max;
}
int main()
{
    int n;
    printf("Enter the array size: ");
    scanf("%d",&n);
    int arr[n];
    int min, max;
    minmax(n,arr);
    printf("Min and Max are: %d %d",min,max);
    return 0;
}