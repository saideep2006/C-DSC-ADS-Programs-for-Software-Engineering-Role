#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,s=0;
	char str[1000];
	fgets(str,1000,stdin);
	n=strlen(str);
	for(i=0;i<n/2;i++)
	{
		if(str[i]!=str[n-i-1])
		{
			s=1;
		}
	}
	if(s)
	{
		printf("%s is a palindrome",str);
	}
	else
	{
		printf("%s is not a palindrome",str);
	}
	printf("\n%d",n);
}
