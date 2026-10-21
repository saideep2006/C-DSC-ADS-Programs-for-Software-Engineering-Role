#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the array size: ");
	scanf("%d",&n);
	int s[n];
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d ",&s[i]);
	}
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+s[i];
	}
	printf("Total amount in savings is %d",sum);
	return 0;
}
