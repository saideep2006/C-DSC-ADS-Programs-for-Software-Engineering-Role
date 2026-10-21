#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,a=0,b=1,c;
	printf("0 1 ");
	for(i=0;i<n;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
	return 0;
}
