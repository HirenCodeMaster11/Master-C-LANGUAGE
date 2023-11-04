#include<stdio.h>

main()
{
	float cel,f;
	
	printf("Enter value of celsius: ");
	scanf("%d",&cel);
	
	f = (9/5 * cel) + 32;
	printf("Fahrenheit = %f\n",f);
}
