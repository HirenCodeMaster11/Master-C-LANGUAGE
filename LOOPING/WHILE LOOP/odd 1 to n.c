#include<stdio.h>

main()
{
	int n;
	int a=1;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	while(a<=n)
	{
		if(a%2!=0)
		{
			printf("%d ",a);
		}
		a++;
	}
}
