#include<stdio.h>
//Q.7 Write a Program to print the below pattern using nested for loop.
//*  *  *  *  *
//*             *
//*  *  *  *  *
//*             *
//*             *


main()
{
	int i,j,k,l;
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(j==1 || j==5 || i==1 || i==3)
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
