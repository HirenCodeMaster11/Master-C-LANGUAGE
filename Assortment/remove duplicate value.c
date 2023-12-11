#include<stdio.h>
//1. WAP to get the array and count & remove all duplicate values in the array.
main()
{
	int n;
	
	printf("Enter the size of Array : ");
	scanf("%d",&n);
	
	int a[n];
	int i,x=0,j,remove=0;
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i] == a[j])
			{
				x++;
			}
		}
	}
	
	printf("Duplicate Num is : %d\n",x);
	
	printf("Remove element is : ");
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i] == a[j])
			{	
				printf("%d ",a[i]);
			}
		}
	}
	
	printf("\n");
	
	for(i=0; i<n-remove; i++)
	{
		for(j=i+1; j<n-remove; j++)
		{
			if(a[i] != a[j])
			{
				printf("%d",a[i]);
			}
		}
	}
}
