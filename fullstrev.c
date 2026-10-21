#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str[1000];
	fgets(str,1000,stdin);
	int x = strlen(str);
	for(i=x;i>=0;i--)
	{
		printf("%c",str[i]);
	}
}
