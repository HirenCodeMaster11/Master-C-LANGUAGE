#include<stdio.h>
#include<conio.h>

main()
{
	int x,y,z,ans;
	
	printf("Enter the value of x : ");
	scanf("%d",&x);
	printf("Enter the value of y : ");
	scanf("%d",&y);
	printf("Enter the value of z : ");
	scanf("%d",&z);
	
	ans = (x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x));
	
	printf("%d",ans);
}
