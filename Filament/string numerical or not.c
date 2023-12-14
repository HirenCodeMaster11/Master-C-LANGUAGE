#include<stdio.h>
#include<string.h>

main()
{
	char a[50];
	
	printf("Enter the string a : ");
	gets(a);
	
	int len = strlen(a);
	
	int i;
	int check=0;
	
	for(i=0; i<len; i++)
	{
		if(a[i]>=48 && a[i]<=57)
		{
			check=1;
		}
	}
	
	if(check == 1)
	{
		printf("%s is numerical",a);
	}
	else
	{
		printf("%s is not numerical",a);
	}
}
