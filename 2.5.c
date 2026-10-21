#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	int a[n];
	printf("Read the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	int busID;
	printf("Enter the busID: \n");
	scanf("%d",&busID);
	for(i=0;i<n;i++)
	{
		if(a[i]==busID)
		{
			printf("%d is found");
			return 0;
		}
	}
	printf("busID is not found in the list");
	return 0;
}
