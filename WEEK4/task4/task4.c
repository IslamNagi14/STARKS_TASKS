#include<stdio.h>
void main (void)
{
	int arr[10],S_even = 0,P_odd = 1;
	for(int i = 0; i<10;i++)
	{
		printf("enter the %dth number : ",i+1); 
		scanf("%d",& arr[i]);
		if( arr[i] % 2 == 0)
			S_even+=arr[i];
		else{P_odd*=arr[i];}
	}
	printf("the summation of the even number is %d\n",S_even); 
	printf("the production of the odd number is %d ",P_odd); 
	
}