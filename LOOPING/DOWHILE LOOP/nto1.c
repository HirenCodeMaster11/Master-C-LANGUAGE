#include<stdio.h>

main()
{
	int a = 1;
	int n;
	
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	do
	{
		printf("%d ",n);
		n--;
	}while(a<=n);
}
