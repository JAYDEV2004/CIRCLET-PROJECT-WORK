/*
5
44
3333
22222
111111
*/
#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}