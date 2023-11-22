#include<stdio.h>

main()
{
	int a = 1 , sum = 0;
	int n;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	for(a=1; a<=n; a++)
	{
		sum = sum + a;
	}
	printf("Sum is %d",sum);
}
