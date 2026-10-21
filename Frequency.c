#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str[100];
	printf("Enter the String: ");
	fgets(str,100,stdin);
	int n=strlen(str)-1;
	char s;
	int f=0,c=0;
	printf("Enter the string value: ");
	scanf(" %c",&s);
	for(i=0;i<n;i++)
	{
		if(str[i]==s)
		{
			f=1;
			c++;
			printf("%c is found\n",str[i]);
			break;
		}
	}
	if(f!=1)
	{
		printf("%c is not found\0",s);
	}
	printf("%d",c);
	return 0;
}
