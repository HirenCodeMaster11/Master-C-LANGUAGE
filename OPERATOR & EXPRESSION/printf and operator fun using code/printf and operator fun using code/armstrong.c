#include<stdio.h>

void main()
{
	int h;
	
	printf("Value is :"); //153
	scanf("%d",&h);
	
	int x,y,z,a,b,c;
	
	x=h%10; //last out 3
	a=h/10; //last delete =15 
	y=x%10; //last out = 5
	b=a/10; //last delete = 1
	z=y%10; //last out = 1
	
	c=(x*x*x)+(y*y*y)+(z*z*z);
	
	printf("armstrong num = %d",c==h);
}