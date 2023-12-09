#include<stdio.h>
//2. Write a C program to find the second largest number in the array.
int main()
{
	int n;
	
	printf("Enter the size of Array : ");
	scanf("%d",&n);
	
    int a[n]; 
	
	for (int i=0; i<n; i++)
    {
        printf("Enter the value of a[%d] : ",i);
        scanf("%d",&a[i]);
    }
 
 	int max;
 	int secLar;
 	
 	if(a[0]>a[1])
 	{
 		max = a[0];
 		secLar = a[1];
	}
	else
	{
		max = a[1];
 		secLar = a[0];
	}
    for (int i=0; i<n; i++)
    {
        if(a[i] > max) 
        {
    		secLar = max;
           	max = a[i];
        }
        else if(secLar < a[i])
        {
        	secLar = a[i];
		}
    }
    
    printf("Second Largest Value is : %d",secLar);
}