#include<stdio.h>
//7. Write a C program to find the largest number in array.[2D]
main()
{
	int n;
	
	printf("Enter the size of Array : ");
	scanf("%d",&n);
	
	int a[n][n];
	int i,j,max;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Enter the value of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	max=a[0][0];
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i][j]>max)
			{
				max = a[i][j];
			}
		}
	}

	printf("%d",max);
}
