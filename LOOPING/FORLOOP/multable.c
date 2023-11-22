#include<stdio.h>

main()
{
	int a = 1 , mul = 1;
	int n;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	for(a=1; a<=10; a++)
	{
		printf("%d*%d = %d\n",n,a,n*a);
	}
	
}
