#include<stdio.h>
#include<string.h>
int main()
{
	int i,x;
	char s[1000];
	fgets(s,1000,stdin);
	x = strlen(s);
	for(i=x;i>-1;i--)
	{
		printf("%c",s[i]);
	}
	return 0;
}
