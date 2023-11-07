#include<stdio.h>

main()
{
	int month;
	
	printf("Enter the month number : ");
	scanf("%d",&month);
	
	switch(month)
	{
		case 1 : printf("January - 31");
		break;
		case 2 : printf("February - 28");
		break;
		case 3 : printf("march - 31");
		break;
		case 4 : printf("April - 30");
		break;
		case 5 : printf("May - 31");
		break;
		case 6 : printf("June - 30");
		break;
		case 7 : printf("July - 31");
		break;
		case 8 : printf("August - 30");
		break;
		case 9 : printf("September - 31");
		break;
		case 10 : printf("October - 30");
		break;
		case 11 : printf("November - 31 ");
		break;
		case 12 : printf("December - 30");
		break;
		default : printf("Enter the valid value !");
	}
}
