#include<stdio.h>

main()
{
	int i,j;
	
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(j==1 && i!=1 && i!=7 || j==5 && i!=1 && i!=7 || i==1 && j!=1 && j!=5 || i==7 && j!=1 && j!=5 || j==3 && i==5 || i==7 && j==5 || i==6 && j==4)
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
