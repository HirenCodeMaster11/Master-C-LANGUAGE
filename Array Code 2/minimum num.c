//9. Write a program in C to find the minimum elements in an array.
#include<stdio.h>

main()
{
	int a[3];
	int i;
	int min;
	
	for(i=0; i<3; i++)
	{
		printf("Enter the value a[%d]: ",i);
		scanf("%d",&a[i]);
	}

	min = a[0];
	
	for(i=0; i<3; i++)
	{		
		if(a[i]<min)
		{
			min = a[i];
		}
	}
	
	printf("Minimum num is %d\n",min);
}