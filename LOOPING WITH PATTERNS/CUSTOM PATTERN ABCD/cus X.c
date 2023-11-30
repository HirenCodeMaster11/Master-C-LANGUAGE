#include<stdio.h>

main()
{
	int i,j;
	
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=7; j++)
		{
			if(j==2 && i==6 || j==3 && i==5 || j==1 && i==7 || j==5 && i==3 || j==6 && i==2 || j==7 && i==1)
			{
				printf("* ");	
			}
			else if(i==j)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
