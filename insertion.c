#include<stdio.h>
int main()
{
	int a[20],i,n,b;
	printf("Enter the size(n) value:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	printf("Entered elements are :");
	for(i=0;i<n;i++)
	{
		printf("%d ",&a[i]);
	}
	printf("Enter the b element");
	scanf("%d",&b);
	n++;
	for(i=n-1;i>b;i--)
	{
		a[i]=a[i-1];
	}
	for(i=0;i<=n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
