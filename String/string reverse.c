#include<stdio.h>
//4. WAP to given string in reverse.
main()
{
	int n;
	
	printf("Enter the num. of charecter : ");
	scanf("%d",&n);
	
	char a[n];
	int i,count=0;
	
	printf("Enter the char. : ");
	scanf("%s",&a);
	
	for(i=0; i<a[i]; i++)
	{
		count++;
	}
	
	printf("Reverse string is : ");
	
	for(i=count; i>=0; i--)
	{
		printf("%c",a[i]);         
	}
}
