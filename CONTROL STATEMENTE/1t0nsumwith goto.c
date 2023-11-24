//4. WAP to find the sum of n numbers using the goto statement.

#include<stdio.h>

main()
{
	int a = 1;
	int n,sum = 0;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	n:
	sum = sum+a;
	a++;
	if(n>=a)
	{
		goto n;	
	}
	printf("1 to n sum is %d",sum);
}
