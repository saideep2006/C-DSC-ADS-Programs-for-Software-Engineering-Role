#include<stdio.h>
int main()
{
	int i,n,key,f=-1,s=-1;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	printf("Enter the key value: ");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			if(f=-1)
			{
				f=i;
			}
			else if(s=-1)
			{
				s=i;
				break;
			}
		}
	}
	if(s!=-1)
	{
		printf("Not");
	}
	else
	{
		printf("Yes");
	}
	return 0;
}
