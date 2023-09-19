  /*  
	*
   * *
  *   *
 *     *
*       *
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
			
		if(j==5)
		printf("*",j);
		else
		printf(" ");
		}
		
		for(j=j+2;j<=5;j++)
		{
		if(j==5)
		printf("*");
		else
		printf(" ");
		
		}
		printf("\n");
    }
}
   

