#include<stdio.h>
int main()
{
	int i,n,key,count=0,x=0,z=0;
	printf("Enter the array size: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	printf("Enter the value to be selected: \n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]>key)
		{
			count++;
		}
		else if(a[i]<key)
		{
			x++;
		}
		else if(a[i]/key==0)
		{
			z++;
		}
	}
	printf("Greater: %d\n",count);
	printf("Lesser: %d\n",x);
	printf("Divisible: %d\n",z);
}
