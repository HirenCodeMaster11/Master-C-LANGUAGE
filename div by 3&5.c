#include<stdio.h>

int div(int a)
{
	if(a%3==0 && a%5==0)
	{
		printf("The given number is divisible by both 3 and 5");
	}
	else if(a%3==0)
	{
		printf("The given number is divisible by 3");
	}
	else if(a%5==0)
	{
		printf("The given number is divisible by 5");
	}
	else
	{
		printf("The given number is not divisible by both 3 and 5");
	}
}

main()
{
	int a;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	
	int ans;
	ans=div(a);
}