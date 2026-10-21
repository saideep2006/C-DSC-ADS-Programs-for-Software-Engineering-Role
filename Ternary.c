#include<stdio.h>
int Ternary(int a, int b, int c)
{
	int res = (a>b) ? (a>c ? a : c) : (b>c ? b: c);
	return res;
}
int main()
{
	int a,b,c,s;
	printf("Enter the 3 numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	s=Ternary(a,b,c);
	printf("%d",s);
	return 0;
}
