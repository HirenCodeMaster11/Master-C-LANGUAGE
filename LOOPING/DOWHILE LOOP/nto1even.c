#include<stdio.h>

main()
{
	int a = 1;
	int n;
	
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	do
	{
		if(n%2==0)
		{
			printf("%d ",n);
		}
		n--;
	}while(a<=n);
}
