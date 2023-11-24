//3. WAP to find the n number factorial without a loop. (using a goto statement). 

#include<stdio.h>

main()
{
	int a = 1;
	int n,fac = 1;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	n:
	fac = fac*a;
	a++;
	if(n>=a)
	{
		goto n;	
	}
	printf("1 to n factorial is %d",fac);
}
