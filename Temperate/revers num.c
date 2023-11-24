// 4. wap to reverse number of given number.

#include<stdio.h>

main()
{
	int x;
	int y;
	
	printf("Enter the num : ");
	scanf("%d",&x);
	
	while(x>0)
	{
		y=x%10;
		printf("%d",y);
		x=x/10;
	}
	
}
