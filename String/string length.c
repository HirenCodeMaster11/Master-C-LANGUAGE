#include<stdio.h>
//3. WAP to given string length.
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
	
	printf("Lenght is : %d",count);
}
