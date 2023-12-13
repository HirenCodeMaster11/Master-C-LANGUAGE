#include<stdio.h>
#include<string.h>
//6. WAP to convert given string in Title Case.
main()
{
	char a[50];
	int i;
	
	printf("Enter the char. : ");
	gets(a);
	
	int len = strlen(a);
	
	if(a[0]>=97 && a[0]<=122)
	{
		a[0] = a[0] - 32;
	}
	for(i=1; i<len; i++)
	{
		if(a[i-1]==' ')
		{
			if(a[i]>=97 && a[i]<=122)
			{
				a[i] = a[i] - 32;
			}	
		}
		else if(a[i]>=65 && a[i]<=90)
		{
			a[i] = a[i] + 32;
		}
		if(a[i]==' ')
		{
			if(a[i]>=97 && a[i]<=122)
			{
				a[i+1] = a[i+1] - 32;
			}
		}
	}
	
	puts(a);
}
