#include<stdio.h>
#include<string.h>

main()
{
	char a[50];
	printf("Enter the string : ");
	gets(a);
	
	int len = strlen(a);
	
	int i,j=len-1;
	int check=0;
	
	for(i=0; i<len; i++)
	{	
		if(a[i]!=a[j])
		{
			check=1;
		}
		j--;
	}
	if(check == 1)
	{
		printf("%s is not palindrome",a);
	}
	else
	{
		printf("%s is palindrome",a);
	}
}
