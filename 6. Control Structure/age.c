#include<stdio.h>

main()
{
	int age;
	
	printf("Enter the Age : ");
	scanf("%d",&age);
	
	if(0<age)
	{
	
		if(age<100)
		{
			printf("Correct age");
		}
		else
		{
			printf("no");	
	 	}
	}
	else
	{
		if(age==0)
		{
			printf("Not age");	
		}
		else
		{
			printf("no");
		}	
	}	
}