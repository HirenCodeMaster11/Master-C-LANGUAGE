//Q.2 Write a Program to find the sum of a 1D array

#include<stdio.h>

main()
{
	int n;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n];
	int i;
	int sum = 0;
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		sum = sum + a[i];
	}
	
	printf("\nSum is = %d",sum);
}
