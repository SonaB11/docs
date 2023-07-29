#include <stdio.h>
int main()
{
   	int n,R;
   	int s=0;
  	scanf("%d",&n);
	
	while(n>0)
	{
	  R=n%10;
	  s=s*10+R;
	  n=n/10;
	}
	
	printf("%d",s);

return 0;
}
