#include<stdio.h>
#include<string.h>

main()
{
	char a[50];
	char b[50];
	
	printf("Enter the string a : ");
	gets(a);
	
	int len = strlen(a);
	
	int i;
	
	for(i=0; i<len; i++)
	{
		b[i] = a[i];
	}
	
	puts(b);
}
