#include<stdio.h>

main()
{
	float unit,tax,amt;
	
	printf("Enter the value of unit : ");
	scanf("%f",&unit);
	
	if(unit<=50 )
	{
		amt = unit*0.5;
	}
	else if(unit>50 && unit<=100)
	{
		amt = 25 + unit-50*0.75;	
	}
	else if(unit>100 && unit<=150)
	{
		amt = 25 + 37.5 + unit-100*1.25;
	}	
	tax = amt*18/100;
	amt += tax;
	
	printf("total bill : %.2f",amt);
}
