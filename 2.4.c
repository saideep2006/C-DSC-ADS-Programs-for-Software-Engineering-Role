#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the array size: \n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	int key;
	printf("Enter the key element: ");
	scanf("%d",&key);
	n++;
	for(i=n;i>1;i--)
	{
		a[i]=a[i-1];
	}
	a[1]=key;
	printf("Updated array: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
