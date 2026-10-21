#include<stdio.h>
void fib(int n)
{
    int a=0,b=1,c,i;
    printf("%d %d ",a,b);
    for(i=2;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
}
int main()
{
    int m;
    scanf("%d",&m);
    printf("Fib series are: ");
    fib(m);
    return 0;
}