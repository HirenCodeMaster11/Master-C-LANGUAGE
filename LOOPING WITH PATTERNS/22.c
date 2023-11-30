#include<stdio.h>

main()
{
	char i,j,k;
	
	for(i=65; i<=69; i++)
	{
		for(k=65; k<i; k++)
		{
			printf(" ");
		}
		for(j=i; j<=69; j++)
		{
			if(j%2==0)
			{
				printf("|");	
			}	
			else
			{
				printf("-");
			}
		}
		printf("\n");
	}
}