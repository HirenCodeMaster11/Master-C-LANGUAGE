#include<stdio.h>
#include<conio.h>

main()
{
	int x,y,ans;
	
	printf("Enter the value of x : ");
	scanf("%d",&x);
	printf("Enter the value of y : ");
	scanf("%d",&y);
	
	ans= (x*x*x) - (y*y*y) - ((3*x*y)*(x+y));
	
	printf("%d",ans);
}
