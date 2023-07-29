#include<stdio.h>
int main()
{
	int i=1,c=0,n;
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			c++;
			i++;
		}
		else
		{
			i++;
		}	
	}
	if(c==2)
	{
		printf("It is a prime no.");
	}
	else
	{
		printf("It is not a prime no.");
	}
return 0;
}
