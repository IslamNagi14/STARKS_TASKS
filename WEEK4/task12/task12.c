#include<stdio.h>

void main (void)
{
	int arr[10] , min , max;
	for(int i = 0;i < 10;i++)
	{
		printf("enter the value of the %dth element : ",i+1);
		scanf("%d",&arr[i]);
	}
	min = max = arr[0];

for(int i = 0;i < 10;i++)
	{
		if(min > arr[i])
	    {min = arr[i];}
		else if(max<arr[i]) 
		{max = arr[i];}
	}	
	printf("the minimum value is %d\n",min);
	printf("the maximum value is %d",max);
}