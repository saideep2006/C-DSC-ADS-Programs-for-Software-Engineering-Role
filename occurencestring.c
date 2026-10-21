#include<stdio.h>
#include<string.h>
int main()
{
	int i,c=0,f=0;
	char s[100];
	fgets(s,100,stdin);
	char t;
	scanf("%c",&t);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]==t)
		{
			f=1;
			c++;
		}
	}
	if(f==1)
	{
		printf("%d",c);
	}
	else
	{
		printf("%c not found",t);
	}
	return 0;
}
