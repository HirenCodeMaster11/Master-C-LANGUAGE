#include<stdio.h>

void hacker(int *otp)
{
	int hackerIn;
	
	printf("Hacker Input Balance : ");
	scanf("%d",&hackerIn);
	
	if(hackerIn<=*otp)
	{
		*otp = *otp - hackerIn;
	}
	else
	{
		printf("Please enter maximum %d Balance",*otp);
	}
}
void main()
{
	int bankBalance;
	
	printf("Enter the your Bank Balance : ");
	scanf("%d",&bankBalance);
	
	int *otp = &bankBalance;
	
	hacker(otp);
	printf("Your Current Amount : %d",bankBalance);
}