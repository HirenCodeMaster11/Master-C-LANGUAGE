#include<stdio.h>

int fac(int x)
{
	if(x==1)
	{
		return 1;
	}
	
	return x * fac(x-1);
}
main()
{
	int x;
	
	printf("Enter the value : ");
	scanf("%d",&x);
	
	printf("Factorial is : %d",fac(x));
}