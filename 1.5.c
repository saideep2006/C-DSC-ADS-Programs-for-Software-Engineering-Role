#include<stdio.h>
int main()
{
	int i,j,last,n,l;
	printf("Enter the array size: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	printf("Rotation times: ");
	scanf("%d",&l);
	for(i=0;i<n;i++)
	{
		last=a[l-1];
		for(j=l-1;j>0;j--)
		{
			a[j]=a[j-1];
		}
		a[0]=last;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
