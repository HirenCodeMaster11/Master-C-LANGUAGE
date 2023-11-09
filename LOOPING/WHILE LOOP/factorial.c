#include<stdio.h>

main()
{
	int n;
	int a=1;
	int fac=1;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	while(n>=a)
	{
		fac = fac*a;
		a++;
	}
	printf("%d",fac);
}
