#include<stdio.h>
#include<string.h>

main()
{
	char a[50];
	
	printf("Enter the string a : ");
	gets(a);
	
	int len = strlen(a);
	
	int i;
	int care=0, dig=0, spe=0;
	
	for(i=0; i<len; i++)
	{
		if(a[i]>=65 && a[i]<=90 || a[i]>=97 && a[i]<=122)
		{
			care++;
		}
		else if(a[i]>=48 && a[i]<=57)
		{
			dig++;
		}
		else if(a[i]>=33 && a[i]<=47 || a[i]>=58 && a[i]<=64)
		{
			spe++;
		}
	}
	
	printf("Count of Cheracters : %d\n",care);
	printf("Count of Digits : %d\n",dig);
	printf("Count of pecial cheracter : %d",spe);
}
