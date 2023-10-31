#include<stdio.h>
#include<stdio.h>

main()
{
	int height,base;
	float area;
	printf("Enter the value of height : ");
	scanf("%d",&height);
	printf("Enter the value of base : ");
	scanf("%d",&base);
	
	area =height * base/2;
	
	printf("area is : %.2f",area);
}
