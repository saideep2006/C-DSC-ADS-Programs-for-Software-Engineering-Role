#include<stdio.h>
int main()
{
	int i,n,h,c;
	scanf("%d %d %d",&n,&h,&c);
	float sc;
	if(h<=3)
	{
		sc=30.0;
		printf("%d %d %.2f",c,h,sc);
	}
	else if(h>3 && h<24)
	{
		sc=30.0 + (h - 3) *  5.0;
		printf("%d %d %.2f",c,h,sc);
	}
	else if(h==24)
	{
		sc=80.0;
		printf("%d %d %.2f",c,h,sc);
	}
	return 0; 
}
