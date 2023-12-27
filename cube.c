#include<stdio.h>

int cube(int a)
{
	int Cube = a*a*a;
	return Cube;
}
int input(int a)
{
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	cube(a);
}
main()
{
	int b;
	input(b);
	int x = cube(5);
	printf("%d",x);
}