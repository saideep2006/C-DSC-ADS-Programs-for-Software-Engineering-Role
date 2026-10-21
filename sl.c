#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	fgets(str,100,stdin);
	int x=strlen(str);
	printf("%d",x);
	return 0;
}
