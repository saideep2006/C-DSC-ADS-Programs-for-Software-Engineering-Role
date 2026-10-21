#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0],min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("the max element in the array is %d\n",max);
    printf("the min element in the array is %d",min);
    return 0;
}
