#include<stdio.h>
#include<stdlib.h>
void main(void)
{
	int arr[5][5],R_sum,C_sum;
	for(int i = 0 ;i < 5; i++)
	{
		printf("enter row %d : ",i+1);
		for(int j = 0 ;j < 5; j++)
		{
			
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Row total: ");
	for(int i = 0 ;i < 5; i++)
	{
		R_sum=0;
		for(int j = 0 ;j < 5; j++)
		{
			R_sum+=arr[i][j];
		}
		printf("%d\t",R_sum);
	}
	printf("\nColumn total: ");
	for(int i = 0 ;i < 5; i++)
	{
		C_sum=0;
		for(int j = 0 ;j < 5; j++)
		{
			C_sum+=arr[j][i];
		}
		printf("%d\t",C_sum);
	}
}