#include<stdio.h>
int main()
{
    int i,n,f=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
        	f=1;
            c++;
        }
    }
    if(f==1)
    {
    	printf("Negative numbers found are %d\n",c);
	}
	else
	{
		printf("Negative numbers are not found\n");
	}
    return 0;
}
