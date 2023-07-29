#include <stdio.h>
int main()
{
int i,n,a ,max=0,min=0;
while(i<=10)
	{
	scanf("%d",&n );
	while (n>0)
	{
 	if (n>max)
 		{
 	min=max;
 	max=n;
 	i=i+1;
 		}
 	else if(min<n)
 		{
 	min=n;
 	i=i+1;
 		}
 	}
 	}
 	printf("%d %d",min,max);
 	return 0;
 }
