//5. Write C program to calculate factorial of a number.

#include<stdio.h>

main()
{
	int fac=1,n,a=1;
	
	printf("Enter the table num : ");
	scanf("%d",&n);
	
	for(a=1;a<=n;a++)
	{
		fac = fac * a;
	}
	printf("%d",fac);
}
