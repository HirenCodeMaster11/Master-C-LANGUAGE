#include<stdio.h>

main()
{
	int math,eng,guj,total;
	
	printf("Enter the value of math,eng,guj : ");
	scanf("%d%d%d",&math,&eng,&guj);
	
	total = math + eng + guj;
	printf("\n%d",total/3);
	
	if(total<100 && total<90)
	{
		printf("\na grade");
	}
	else if(total<89 && total<70)
	{
		printf("\nb grade");	
	}
	else
	{
		printf("\nc grade");
	}	
}
