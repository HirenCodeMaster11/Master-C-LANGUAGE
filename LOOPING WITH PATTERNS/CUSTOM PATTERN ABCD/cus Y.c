#include<stdio.h>

main()
{
	int i,j;
	
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=7; j++)
		{
			if(j==4 && i!=1 && i!=2 && i!=3 || j==5 && i==3 || j==6 && i==2 || j==7 && i==1 || j==1 && i==1 || j==2 && i==2 || j==3 && i==3)
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
