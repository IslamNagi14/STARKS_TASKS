#include<stdio.h>
void main(void)
{
	int n;
	printf("enter the size of your array : ");
	scanf("%d",&n);
	int arr[n] , min , max , i_min = 0 , i_max = 0;
	for(int i = 0;i < n;i++)
	{
		printf("enter the %d elemnt: ",i+1);
		scanf("%d",&arr[i]);
	}
	min = max = arr[0];
	
	for(int i = 0;i < n;i++)
	{
		
		if (max < arr[i]) 
		{
			max = arr[i];
			i_max = i;
		}
		if(min > arr[i])
		{
			min = arr[i];
			i_min = i;
		}
		
	}
	printf("the maximum elemnt is %d and its index is %d\n",max,i_max);
	printf("the minimum elemnt is %d and its index is %d",min,i_min);
}