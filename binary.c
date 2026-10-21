#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the n value:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[n]);
	}
	int k;
	printf("Enter the element to be searched:");
	scanf("%d",&k);
	int low=0,high=n-1,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==k)
		{
			printf("The element found at index %d",mid);
			return 0;
		}
		else if(arr[mid]<k)
		{
			low=mid+1;
		}
		else
		{
			mid=high-1;
		}
	}
	printf("No element found\n");
	return 0;
}
