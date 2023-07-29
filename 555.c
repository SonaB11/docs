#include <stdio.h>
	int main()
	{
	int i,n,s;
	int a=5;
	i=1,s=0;
	printf("Enter the value of n :-");
	scanf("%d",&n);
	while (i<=n)
	{
	a=a*10+5;
	s=s+a;
	i++;
	}
	printf("%d",s);
return 0;
}
