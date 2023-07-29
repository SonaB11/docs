#include <stdio.h>
int main()
{
int i,c,n;
i=1;
c=0;
scanf("%d",&n);
while(i<=n)
{
 int j=2;
   if(j<=10)
   {
     if(i%j==0)
   	{
   	 c++;
   	 j++;
   	}
     else
            {
            j++;
            }
        }
        }
    else     
    {
    i++;
    }
 printf("%d",c);
 }
 return 0;
 }
   
