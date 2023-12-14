#include<stdio.h>
#include<string.h>

main()
{
	char a[50];
	char b[50];
	
	printf("Enter the string a : ");
	gets(a);
	printf("Enter the string b : ");
	gets(b);
	
	int len1= strlen(a);
	int len2 = strlen(b);
	
	int i;
	
	if(a[i] == b[i])
	{
		printf("%s and %s are same",a,b);
	}
	else
	{
		printf("%s and %s are not same",a,b);
	}
}
