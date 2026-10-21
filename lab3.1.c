#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the size of the array: \n");
	scanf("%d",&n);
	int a[n][n];
	printf("Read the elements: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=sum+a[i][j];
		}
	}
	printf("%d",sum);
	return 0;
}
