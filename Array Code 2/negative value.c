#include<stdio.h>
//1. Write a C program to print all negative elements in an array.
main()
{
	int n;
	
	printf("Enter the value of Array : ");
	scanf("%d",&n);

	int a[n];
	int i,j;
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("Nagetive value is : ");
	for(i=0; i<n; i++)
	{
		if(a[i]<0)
		{
			printf("%d ",a[i]);
		}
	}
	
}