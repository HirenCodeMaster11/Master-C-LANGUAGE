#include<stdio.h>

int sum(int x)
{
	if(x==1)
	{
		return 1;
	}
	
	return x + sum(x-1);
}
main()
{
	int x;
	
	printf("Enter the value : ");
	scanf("%d",&x);
	
	printf("1 to n sum is : %d",sum(x));
}