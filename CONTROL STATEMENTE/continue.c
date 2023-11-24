//2. WAP to demonstrate the use of continue keyword.

#include<stdio.h>

main()
{
	int a = 1;
	int b;
	printf("Enter the skip step : ");
	scanf("%d",&b);
	
	for(a; a<=10; a++)
	{
		if(a==b)
		{
			continue;
		}
		printf("%d ",a);
	}
}
