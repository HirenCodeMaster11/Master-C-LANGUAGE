#include<stdio.h>
#include<conio.h>

main()
{
	int a = 1;
	int b = 2;
	int c;
	
    c = a;
    a = b;
    b = c;

    printf("a = %d\n",a);
    printf("b = %d",b);
}