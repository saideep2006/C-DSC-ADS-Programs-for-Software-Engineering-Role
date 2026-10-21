#include<stdio.h>
void Range(int n)
{
	int i=1;
	while(i<=n)
	{
		printf("%d\n",i);
		i++;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("Range: \n");
	Range(n);
	return 0;
}
