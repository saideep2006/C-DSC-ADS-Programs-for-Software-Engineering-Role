#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the size of the array: \n");
	scanf("%d",&n);
	int a[n];
	printf("read the elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	int p;
	printf("Enter the element to be inserted: \n");
	scanf("%d",&p);
	a[0]=p;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
