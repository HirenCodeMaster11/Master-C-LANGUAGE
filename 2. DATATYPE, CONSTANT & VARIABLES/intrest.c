#include<stdio.h>
#include<stdio.h>

main()
{
	int bal,rate,time;
	float amount;
	printf("Enter the value of bal : ");
	scanf("%d",&bal);
	printf("Enter the value of rate : ");
	scanf("%d",&rate);
	printf("Enter the value of time : ");
	scanf("%d",&time);
	
	amount = bal*(1+rate*time);
	
	printf("amount is : %.2f",amount);
}
