#include<stdio.h>

main()
{
	int a = 1 , fac = 1;
	int n;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	for(a=1; a<=n; a++)
	{
		fac = fac * a;
	}
	printf("Factorial is %d",fac);
}
