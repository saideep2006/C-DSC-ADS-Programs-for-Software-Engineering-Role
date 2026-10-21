#include<stdio.h>
#include<stdlib.h>
void read()
{
	int i,n;
	printf("Enter the array size: \n");
	scanf("%d",&n);
	int *arr = (int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}
void display()
{
	int i,n;
	
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("%d",&arr[i]);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	void read();
	void display();
	return 0;
}
