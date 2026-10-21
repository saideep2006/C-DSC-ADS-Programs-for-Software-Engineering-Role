#include<stdio.h>
int fact(int n)
{
    int i,fact=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,result;
    result = fact(n);
    printf("Factorial = %d\n",result);
    return 0;
}