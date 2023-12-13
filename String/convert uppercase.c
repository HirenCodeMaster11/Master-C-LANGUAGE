#include<stdio.h>
//1. WAP to convert given string in uppercase.
main()
{
	int n;
	
	printf("Enter the num. of charecter : ");
	scanf("%d",&n);
	
	char a[n];
	int i;
	
	printf("Enter the char. : ");
	scanf("%s",&a);
	
	for(i=0; i<n; i++)
	{
		if(a[i]>=97 && a[i]<=122)
		{
			a[i] = a[i] - 32;
		}
	}
	
	printf("%s",a);
}
