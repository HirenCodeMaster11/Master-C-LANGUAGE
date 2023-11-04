#include<stdio.h>

main()
{
	
	int a,b,c,x,y,z,num;
	
	printf("Enter The Value : ");
	scanf("%d",&num);
	
	a=num%10;
	x=num/10;
	b=x%10;
	y=x/10;
	c=y%10;
	
	printf("%d",a==c);
	
}