//9. Write a program in C to find the maximum elements in an array.
#include<stdio.h>

main()
{
	int a[3];
	int i;
	int max;
	
	for(i=0; i<3; i++)
	{
		printf("Enter the value a[%d]: ",i);
		scanf("%d",&a[i]);
	}

	max = a[0];
	
	for(i=0; i<3; i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}		
	}
	
	printf("Maximum num is %d\n",max);
}