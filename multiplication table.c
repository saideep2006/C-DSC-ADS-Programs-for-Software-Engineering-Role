#include<stdio.h>
int main()
{
	int  a,b,i,n;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("%d is the entered value of the n\n",n);
	for(i=1;i<=n;i++)
	{
		b = a*i;
		printf("%d x %d = %d\n",a,i,b);
	}
	return 0;
}
