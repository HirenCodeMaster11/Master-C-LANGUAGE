//10. Write a program in C to separate odd and even integers into separate arrays.
#include<stdio.h>

main()
{
	int a[3];
	int i,j,save;

	for(i=0; i<3; i++)
	{
		printf("Enter the value a[%d]: ",i);
		scanf("%d",&a[i]);
	}

	for(i=0; i<3; i++)
	{
		for(j=i+1; j<3; j++)
		{
			if(a[j]<a[i])
			{
				save = a[i];
				a[i] = a[j];
				a[j] = save;	
			}
		}	
	}
	for(i=0; i<3; i++)
	{
		printf("%d ",a[i]);		
	}
}