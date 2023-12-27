#include<stdio.h>
#include<string.h>

//Q.2 Write a Program to find the length of the String by passing a string as an argument using UDF.

int st(int n)
{
	char a[n];
	
	printf("Enter the string: ");
	scanf("%s",&a);
	
	int len = strlen(a);
	
	return len;
}
main()
{	
	int n;
	
	printf("Enter the size of string : ");
	scanf("%d",&n);
	
	int ans = st(5);
	
	printf("%d",ans);
}