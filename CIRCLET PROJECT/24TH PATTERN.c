  /*  
	5
   545
  54345
 5432345
543212345
*/
#include<stdio.h>
int main()
{
	int i,j,k,l;
	
	for(i=5;i>=1;i--)
	{
		for(k=1;k<=i;k++)
		printf(" ");
		
		for(j=5;j>=i;j--)
		{
			printf("%d",j);
		}
		
		for(j=j+2;j<=5;j++)
		{
			printf("%d",j);
		}
		printf("\n");
    }
}
   

