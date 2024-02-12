#include<stdio.h>

void main (void)
{
	int a , b , c , d; //a-->rows1  .... b--> coluwn1 .....c-->rows2......d-->coluwn2
	printf("enter the number of rows in frist matrix : ");
	scanf("%d",&a);
	printf("enter the number of coluwn in frist matrix : ");
	scanf("%d",&b);
	printf("enter the number of rows in second matrix : ");
	scanf("%d",&c);
	printf("enter the number of coluwn in second matrix : ");
	scanf("%d",&d);
	if(b == c)
	{
	int arr1[a][b],arr2[c][d],P_arr[a][d];
	printf("enter the elements of matrix 1\n");
	for(int i = 0;i < a;i++)
	{
		for(int k = 0;k < b;k++)
		{
			printf("enter the value of [%d , %d] : ",i+1,k+1);
			scanf("%d",&arr1[i][k]);
			P_arr[i][k]=0;
		}
		
	}
	printf("enter the elements of matrix 2\n");
		for(int i = 0;i < c;i++)
	{
		for(int k = 0;k < d;k++)
		{
			printf("enter the value of [%d , %d] : ",i+1,k+1);
			scanf("%d",&arr2[i][k]);
		}
		
	}
	
	for(int i = 0;i < a;i++)
	{
		for(int k = 0;k < b;k++)
		{
			for(int j = 0;j< d;j++)
			{
				
				P_arr[i][j]+=arr1[i][k]*arr2[k][j];
			}
			
		}
	}
	printf("the resulting matrix is :\n");
		for(int i = 0;i < a;i++)
	{
		for(int k = 0;k < d;k++)
		{
			printf("%d\t",P_arr[i][k]);
			
		}
		printf("\n");
	}
	}
	else{printf("invalid size of matrices...\nMake sure num.coluwns1 equal num.rows2");}
}