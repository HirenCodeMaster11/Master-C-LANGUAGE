//Q.3 Write a Program to perform the addition operation of two 1D arrays & and store it in another array.
// Keep in mind that both array sizes must be the same.
#include<stdio.h>

main()
{
	int n;
	
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	int a[n];
	int b[n];
	int sum[n];
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("Enter the value b[%d]: ",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0; i<n; i++)
	{
		sum[i] = a[i] + b[i];
	}
	for(i=0; i<n; i++)
	{
		printf("Sum is %d ",sum[i]);
	}
}