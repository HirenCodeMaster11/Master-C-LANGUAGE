#include<stdio.h>

main()
{
	char i,j,k;
	
	for(i=69; i>=65; i--)
	{
		for(k=i; k<69; k++)
		{
			printf(" ");
		}
		for(j=65; j<=i; j++)
		{
			if(j%2==0)
			{
				printf("0");	
			}	
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
}