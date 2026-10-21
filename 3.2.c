#include<stdio.h>
int main()
{
	int i,n,c=0,d=0,z=0;
	printf("Enter the size of array: \n");
	scanf("%d",&n);
	int a[n];
	printf("Read the array elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			c++;
		}
		else if(a[i]<0)
		{
			d++;
		}
		else if(a[i]==0)
		{
			z++;
		}
	}
	printf("Positive: %d\n",c);
	printf("Negative: %d\n",d);
	printf("Zero: %d\n",z);
	return 0;
}
