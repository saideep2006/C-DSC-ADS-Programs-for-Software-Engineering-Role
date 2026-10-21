#include<stdio.h>
void sum(int n)
{
    int i=0;
    do
    {
        int sum=0;
        if(n>0)
        {
            int d=n%10;
            sum+=d;
        }
        printf("%d ",sum);
        i++;
    }while(i<=n);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("The series are: ");
    sum(n);
    return 0;
}