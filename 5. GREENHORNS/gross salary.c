#include<stdio.h>

main()
{
	int sal,hra,da,ta,grosssalary;
	
	printf("Enter value of  Base Salary: ");
	scanf("%d",&sal);
	printf("Enter value of  hra: ");
	scanf("%d",&hra);
	printf("Enter value of  da: ");
	scanf("%d",&da);
	printf("Enter value of ta: ");
	scanf("%d",&ta);
	
	grosssalary = sal + sal*hra/100 + sal*da/100 + sal*ta/100; 
	
	printf("Gross Salary= %d\n",grosssalary);
}
