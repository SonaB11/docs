#include <stdio.h>
int main()
{
int i ,n ,r=5,sum=0 ;
	scanf("%d",&n);
	r=1;
for(i=1;i<=n;i++)
{
	r=(r*10)+5;
	sum=sum +r;
	}
	printf("%d ",sum);
	printf("%d",r);  
	
return 0;

}
