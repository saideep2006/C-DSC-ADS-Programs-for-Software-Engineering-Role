#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the array size");
	scanf("%d",&n);
	int a[n];
	printf("Read the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	int target;
	printf("Enter the target");
	scanf("%d",&target);
	for(i=0;i<n;i++)
	{
		if(a[i]==target)
		{
			printf("%d is found at the %d th position\n",target,i);
			return 0;
		}
	}
	printf("%d is not found in the array\n",target);
	return 0;
}
