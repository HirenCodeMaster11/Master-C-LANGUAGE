#include<stdio.h>
#include<conio.h>

main()
{
	int x,y,ans;
	
	printf("Enter the value of x : ");
	scanf("%d",&x);
	printf("Enter the value of y : ");
	scanf("%d",&y);
	
	ans=(x*x*x) + ((3*x*y)*(x+y)) + (y*y*y);
	
	printf("%d",ans);
}
