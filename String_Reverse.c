#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char str[1000],temp;
	fgets(str,1000,stdin);
	j=strlen(str)-1;
	for(i=0;i<j;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	printf("%s",str);
	return 0;
}
