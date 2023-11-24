//1. WAP to demonstrate the use of break keywords.
#include<stdio.h>

main()
{
	int a = 1;
	int b;
	printf("Enter the limit : ");
	scanf("%d",&b);
	
	for(a; a<=10; a++)
	{
		printf("%d ",a);
		if(a==b)
		{
			break;
		}
	}
}
