//Q.1 Write a Program to find the length of a 1D array.

#include<stdio.h>

main()
{
	int n;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n];
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nLenght is = %d",n);
}
