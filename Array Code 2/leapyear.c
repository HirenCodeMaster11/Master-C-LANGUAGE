#include<stdio.h>
main()
{
	int start,end;
	printf("enter the starting value : ");
	scanf("%d",&start);
	printf("enter the ending value : ");
	scanf("%d",&end);
	int length = end - start;
	int leap = length/4 +1;
	int leapyear[leap];
	int i,x=0;
	for(i=start; i<=end; i++)
	{
		if(i%4==0)
		{
			leapyear[x] = i;
			x++;
		}
	}
	for(i=0; i<x; i++)
	{
		printf("%d ",leapyear[i]);
	}
	
}
