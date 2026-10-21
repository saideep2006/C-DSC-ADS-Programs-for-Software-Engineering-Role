#include<stdio.h>
void table(int a, int n)
{
	int i,res;
	for(i=1;i<=n;i++)
	{
		printf("%d x %d = %d\n",a,i,(a*i));
	}
}
int main()
{
	int a,n;
	scanf("%d",&a);
	scanf("%d",&n);
	table(a,n);
}
