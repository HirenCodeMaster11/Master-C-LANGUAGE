#include<stdio.h>

main()
{
	int n;
	int a=1;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	while(n>=a)
	{
		if(n%2==0)
		{
			printf("%d ",n);
		}
		n--;
	}
}
