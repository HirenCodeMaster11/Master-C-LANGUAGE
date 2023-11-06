#include<stdio.h>

main()
{
	int a,b;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	(a>b) ? printf("a is max") : printf("b is max");
}
