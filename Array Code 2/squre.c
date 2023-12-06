#include<stdio.h>
//Q.3 Write a Program to find square of each element from the given array.
main()
{
	int n;
	
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	int a[n];
	int sq[n];
	int i;
	for(i=0; i<n; i++)
	{
		printf("Enter the value a[%d] ",i);
		scanf("%d",&a[i]);	
	}
	for(i=0; i<n; i++)
	{
		sq[i] = a[i]*a[i];
		printf("%d ",sq[i]);
	}
}
