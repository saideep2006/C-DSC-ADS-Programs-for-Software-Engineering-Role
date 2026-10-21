#include<stdio.h>
void sum(int a, int b)
{
	int res = a+b;
	printf("Sum is %d",res);
}
int main()
{
	int a,b;
	printf("Enter the values of a & b: ");
	scanf("%d%d",&a,&b);
	sum(a,b);
	return 0;
}
