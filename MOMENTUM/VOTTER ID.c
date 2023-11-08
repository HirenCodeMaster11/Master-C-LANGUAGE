#include<stdio.h>

main()
{
	int age;
	
	printf("Enter your age :");
	scanf(" %c",&age);
	
	if(age>=18 && age<=100)
	{
		printf("your age is correct to vote");
	}
	else
	{
		printf("You are rejected");
	}
}