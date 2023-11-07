#include<stdio.h>

main()
{
	char a;

	printf("Q1. Select Language");
	printf("\n1. Gujrati");
	printf("\n2. English");
	printf("\n3. Hindi");

	printf("\nEnter the num : ");
	scanf(" %c",&a);

	switch(a)
	{
		case '1' : printf("Gujrati");
		printf("\n\nQ2. Enter The Problems");
		printf("\n1. Internet Connection");
		printf("\n2. Simcard Problems ");
		printf("\n3. Employee Talk");

		printf("\nEnter the num : ");
		scanf(" %c",&a);

		switch(a)
		{
			case '1' : printf("Internet Connection");
			printf("\n\nQ3. Enter Interner Problems");
			printf("\n1. Slow Speed");
			printf("\n2. Internet Not Working ");

			printf("\nEnter the num : ");
			scanf(" %c",&a);

			switch(a)
			{
				case '1' : printf("Slow Speed");
				break;
				case '2' : printf("Internet Not Working");
				break;
				default : printf("Enter the valid value");
				break;
			}
			break;
			
			case '2' : printf("Simcard Problems");
			printf("\n\nQ3. Enter Simcard Problems");
			printf("\n1. PIN/PUK Code Issues");
			printf("\n2. SIM Card Damage ");

			printf("\nEnter the num : ");
			scanf(" %c",&a);
			
			switch(a)
			{
				case '1' : printf("PIN/PUK Code Issues");
				break;
				case '2' : printf("SIM Card Damage");
				break;
				default : printf("Enter the valid value");
				break;
			}
			break;
			
			case '3' : printf("Employee Talk");
			printf("\n\nQ3. Enter Employee Problems");
			printf("\n1. Technical Discussions");
			printf("\n2. Emerging Technologies");

			printf("\nEnter the num : ");
			scanf(" %c",&a);
			
			switch(a)
			{
				case '1' : printf("Technical Discussions");
				break;
				case '2' : printf("Emerging Technologies");
				break;
				default : printf("Enter the valid value");
				break;
			}
			break;
			default : printf("Enter the valid value");
			break;
		}
		break;
		
		case '2' : printf("English");
		printf("\n\nQ2. Enter The Problems");
		printf("\n1. Internet Connection");
		printf("\n2. Simcard Problems ");
		printf("\n3. Employee Talk");

		printf("\nEnter the num : ");
		scanf(" %c",&a);

		switch(a)
		{
			case '1' : printf("Internet Connection");
			printf("\n\nQ3. Enter Interner Problems");
			printf("\n1. Slow Speed");
			printf("\n2. Internet Not Working ");

			printf("\nEnter the num : ");
			scanf(" %c",&a);

			switch(a)
			{
				case '1' : printf("Slow Speed");
				break;
				case '2' : printf("Internet Not Working");
				break;
				default : printf("Enter the valid value");
				break;
			}
			break;
			
			case '2' : printf("Simcard Problems");
			printf("\n\nQ3. Enter Simcard Problems");
			printf("\n1. PIN/PUK Code Issues");
			printf("\n2. SIM Card Damage ");

			printf("\nEnter the num : ");
			scanf(" %c",&a);
			
			switch(a)
			{
				case '1' : printf("PIN/PUK Code Issues");
				break;
				case '2' : printf("SIM Card Damage");
				break;
				default : printf("Enter the valid value");
				break;
			}
			break;
			
			case '3' : printf("Employee Talk");
			printf("\n\nQ3. Enter Employee Problems");
			printf("\n1. Technical Discussions");
			printf("\n2. Emerging Technologies");

			printf("\nEnter the num : ");
			scanf(" %c",&a);
			
			switch(a)
			{
				case '1' : printf("Technical Discussions");
				break;
				case '2' : printf("Emerging Technologies");
				break;
				default : printf("Enter The Valid Value");
				break;
			}
			break;
			default : printf("Enter The Valid Value");
			break;
		}
		break;
		
		case '3' : printf("Hindi");
		printf("\n\nQ2. Enter The Problems");
		printf("\n1. Internet Connection");
		printf("\n2. Simcard Problems ");
		printf("\n3. Employee Talk");

		printf("\nEnter the num : ");
		scanf(" %c",&a);

		switch(a)
		{
			case '1' : printf("Internet Connection");
			printf("\n\nQ3. Enter Interner Iroblems");
			printf("\n1. Slow Speed");
			printf("\n2. Internet Not Working ");

			printf("\nEnter the num : ");
			scanf(" %c",&a);

			switch(a)
			{
				case '1' : printf("Slow Speed");
				break;
				case '2' : printf("internet Not Working");
				break;
				default : printf("Enter the valid value");
				break;
			}
			break;
			
			case '2' : printf("Simcard Problems");
			printf("\n\nQ3. Enter Simcard Problems");
			printf("\n1. PIN/PUK Code Issues");
			printf("\n2. SIM Card Damage ");

			printf("\nEnter the num : ");
			scanf(" %c",&a);
			
			switch(a)
			{
				case '1' : printf("PIN/PUK Code Issues");
				break;
				case '2' : printf("SIM Card Damage");
				break;
				default : printf("Enter the valid value");
				break;
			}
			break;
			
			case '3' : printf("Employee Talk");
			printf("\n\nQ3. Enter Employee Problems");
			printf("\n1. Technical Discussions");
			printf("\n2. Emerging Technologies");

			printf("\nEnter the num : ");
			scanf(" %c",&a);
			
			switch(a)
			{
				case '1' : printf("Technical Discussions");
				break;
				case '2' : printf("Emerging Technologies");
				break;
				default : printf("Enter the valid value");
				break;
			}
			break;
			default : printf("Enter the valid value");
			break;
		}
		break;
	}
}


