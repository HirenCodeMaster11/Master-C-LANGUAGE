#include<stdio.h>
#include<stdio.h>

main()
{
	const float pi=3.14;
	int rad;
	float area;
	printf("Enter the value of radius : ");
	scanf("%d",&rad);
	
	area = rad * pi * rad;
	
	printf("area of circle is : %.2f",area);
}
