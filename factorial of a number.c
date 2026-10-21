#include<stdio.h>
int main()
{
	int n,i,fact;
	printf("Enter the value of n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact = fact*i;
	}
	printf("The factorial of the number is %d",fact);
	return 0;
}
