#include<stdio.h>

main()
{
	int a = 1;
	int n;
	int fac = 1;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	do
	{
		fac = fac * a;
		a++;
	}while(a<=n);
	
	printf("factorial is %d",fac);
}
