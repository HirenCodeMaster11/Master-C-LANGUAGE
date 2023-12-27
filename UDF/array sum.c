#include<stdio.h>
 
//Q.1 Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.

void arr(int n)
{
	int sum = 0;
	
	int a[n];
	int i;
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		sum = sum + a[i];
	}
	printf("%d",sum);
}
main()
{
	int n;
	printf("Enter the size of n : ");
	scanf("%d",&n);
	
		
	arr(n);
}