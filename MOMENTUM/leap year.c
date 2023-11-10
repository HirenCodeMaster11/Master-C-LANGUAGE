#include<stdio.h>

main()
{
	int a,b,c,d;
	
	printf("Enter the value a,b: ");
	scanf("%d%d",&a,&b);
	
	c = b-a;
	d = c/4;
	
	printf("Leap Year = %d",d++); 
}
