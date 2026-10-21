#include<stdio.h>
#include<ctype.h>
int main()
{
	int i;
	char s[100];
	fgets(s,100,stdin);
	for(i=0;s[i];i++)
	{
		printf("%c",toupper(s[i]));
	}
	for(i=0;s[i];i++)
	{
		printf("%c",tolower(s[i]));
	}
}
