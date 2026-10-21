#include<stdio.h>
void DoW(int n)
{
	int i=0;
	do
	{
		printf("%d\n",i);
		i++;
	}while(i<=n);
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("The range is: ");
	DoW(n);
	return 0;
}
