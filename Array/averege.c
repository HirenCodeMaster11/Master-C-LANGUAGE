//Q.2 Write a Program to find the averege of a 1D array

#include<stdio.h>

main()
{
	
	
	int a[5];
	int i,j;
	
	for(i=0; i<5; i++)
	{
		printf("Enter the value of a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<5; i++)
	{
		for(j=1; j<=10; j++)
		{
			printf("%d x %d = %d\n",a[i],j,a[i]*j);
		}
		printf("\n");
	}
	
}
