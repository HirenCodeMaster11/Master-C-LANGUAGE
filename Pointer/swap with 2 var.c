#include<stdio.h>

//Q.2 Write a Program to swap two variables using Pointers.

main()
{
	int a,b,x;
		
	printf("Enter the value of a : ");//10
	scanf("%d",&a);
	printf("Enter the value of b : ");//20
	scanf("%d",&b);
		
	a = a+b;
	b = a-b;
	a = a-b;
	
	int *ptr =	&a;
	int *ptr2 =  &b;
	
	printf("a is : %d\n", *ptr);
	printf("b is : %d", *ptr2);
}