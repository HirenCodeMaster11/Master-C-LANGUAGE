#include<stdio.h>
#include<conio.h>

main()
{
	int a = 12;
	int b = 25;
	
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("a = %d, b = %d\n", a, b);
    printf("%d", a ^ b);
}
