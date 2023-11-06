#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	printf("Enter the value of c : ");
	scanf("%d",&c);
	
	(a>b)? (a>c)? printf("a is max"): printf("c is max") : (b>c)? ("b is max"): printf("c is max");
}
