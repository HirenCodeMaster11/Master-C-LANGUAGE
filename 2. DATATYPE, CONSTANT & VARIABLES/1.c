#include<stdio.h>
#include<conio.h>

main()
{
	int a = 1;
	int b = 2;
	
    a = a + b;
    b = a - b;
    a = a - b;

    printf("a = %d\n",a);
    printf("b = %d",b);
}