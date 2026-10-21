#include<stdio.h>
int main()
{
	int n,m,p;
	scanf("%d %d %d",&n,&m,&p);
	if(n>m&&n>p)
	{
		printf("%d = n is greatest",n);
	}
	else if(m>n&&m>p)
	{
		printf("%d = m is greatest",m);
	}
	else
	{
		printf("%d = p is greatest",p);
	}
	return 0;
}
