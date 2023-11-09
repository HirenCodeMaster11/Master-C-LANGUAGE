#include<stdio.h>

main()
{
	int n;
	int a=1;
	int table;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	while(a<=10)
	{
		table = n * a;
		printf("%d * %d = %d\n",n,a,table);
		a++;
	}
}
