#include<stdio.h>

main()
{
	int a,b,c,d;
	
	printf("Enter the value : ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	printf("a is max = %d\n",a>b && a>c && a>d);
	printf("b is max = %d\n",b>a && b>c && b>d);
	printf("c is max = %d\n",c>a && c>b && c>d);
	printf("d is max = %d\n",d>a && d>b && d>c);	
}