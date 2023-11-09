#include<stdio.h>

main()
{
	int n;
	int a=1;
	int sum=0;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	while(a<=n)
	{
		sum = sum + a;
		a++;
	}
	printf("%d",sum);
}
