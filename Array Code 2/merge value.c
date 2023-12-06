#include<stdio.h>
//Q.1 Write a Program to perform the merge operation of two 1D arrays & store it in another array.  
//Keep in mind that both array sizes can be different.
main()
{
	int n,m;
	
	printf("Enter the size of array1 and 2: ");
	scanf("%d%d",&n,&m);
	
	int a[n];
	int b[m];
	int o = m+n;
	int merge[m+n];
	int i,j=0;
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);	
	}
	for(i=0; i<m; i++)
	{
		printf("Enter the value of b[%d] : ",i);
		scanf("%d",&b[i]);	
	}
	
	for(i=0; i<n; i++)
	{
		merge[i] = a[i];
	}
	for(i=n; i<o; i++)
	{
		merge[i] = b[j];
		j++;
	}
	for(i=0; i<o; i++)
	{
		printf("%d ",merge[i]);
	}
}
