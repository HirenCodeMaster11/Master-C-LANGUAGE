//2. Write C program to print reversed multiplication table of any number.

#include<stdio.h>

main()
{
	int a=10,n;
	
	printf("Enter the table num : ");
	scanf("%d",&n);
	
	for(a=10;a>=1;a--)
	{
		printf("%d * %d = %d\n",n,a,a*n);
	}
}
