#include<stdio.h>
void main (void)
{
	int n,x;
	printf("enter the size of your array : ");
	scanf("%d",&n);
	int arr[n];
	for(int i = 0; i < n ;i++)
	{
		printf("enter the value of the %dth element : ",i+1);
		scanf("%d",&arr[i]);
	}
    for (int i = 0; i < n;i++)
	{
		x = 0;
		for(int k = 0;k < n;k++)
		{
			if( i == k )
				continue;
			if(arr[i] == arr[k])
			{
				x = 1;
			}
			
		}
		switch(x)
	    {
			case 0:
			printf("%d is uniqu element\n",arr[i]);
	    }
	}
	
}
