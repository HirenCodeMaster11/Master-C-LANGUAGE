//5. Write a program in C to read n number of values in an array and display them in reverse order.

#include<stdio.h>

main()
{
	int n;
	
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	int a[n];
	int b[n];
	int i,j;
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("Array B = %d ",b[i]=a[i]);
	}
}