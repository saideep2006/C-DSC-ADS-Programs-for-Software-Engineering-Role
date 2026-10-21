#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    int *a;
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
