#include<stdio.h>
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Negative numbers factorial is not calcilated\n");
    }
    else
    {
        printf("Entered number factorial is %d",fact(n));
    }
    return 0;
}