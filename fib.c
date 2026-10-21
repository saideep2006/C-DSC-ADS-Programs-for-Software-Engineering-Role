#include<stdio.h>
int main()
{
    int a=0,b=1,c,i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        c = a+b;
        printf("%d ",c);
        a  = b;
        b = c;
    }
    return 0;
}