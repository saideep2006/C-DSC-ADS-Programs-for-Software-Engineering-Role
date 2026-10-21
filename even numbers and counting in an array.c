#include<stdio.h>
int main()
{
	int a[5]={1,56,32,75,97},i,even=0;
	{
		for(i=0;i<5;i++)
		if(a[i]%2==0)
		{
			printf("%d \n",a[i]);
			even++;
		}
		printf("%d ",even);
	}
return 0;
}
