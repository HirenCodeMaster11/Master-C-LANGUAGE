#include<stdio.h>
//Q.2 Write a Program to find leap years between two given numbers and store them in an array. 
//And then print that array. Make this program in the shortest memory.
main()
{
	int n,m;
	
	printf("Enter the size of array1 and 2: ");
	scanf("%d%d",&n,&m);
	
	int ly[10];
	int i=0;
	
	while(n<m)
	{
		if(n%4==0)
		{
			ly[i] = n;
			i++;
		}
		n++;
    }
	for(i=0; i<10; i++)
	{
		printf("%d ",ly[i]);
	}
}
