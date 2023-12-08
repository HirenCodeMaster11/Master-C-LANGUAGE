#include<stdio.h>

main()
{
	int n,m;
	
	printf("Enter the value of row : ");
	scanf("%d",&n);
	printf("Enter the value of column : ");
	scanf("%d",&m);
	
	int a[n][m];
	int b[n][m];
	int sum[n][m];
	int i,j;
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("Enter the value of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("Enter the value of b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n\n");
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("%d ",sum[i][j]);
		}
	}
}
