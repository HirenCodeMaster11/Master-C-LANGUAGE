#include<stdio.h>

main()
{
	int n,m;
	
	printf("Enter the value of row : ");
	scanf("%d",&n);
	printf("Enter the value of column : ");
	scanf("%d",&m);
	
	int a[n][m];
	int i,j,sum,op;
	float ave;
	
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
			sum = sum + a[i][j];
		}
	}
	op=n*m;
	ave = sum/op;
	printf("Average is : %.2f ",ave);
	
}
