#include<stdio.h>
long long Fact(int n)
{
	long long i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%lld",Fact(n));
	return 0;
}
