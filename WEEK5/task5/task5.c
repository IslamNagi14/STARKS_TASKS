#include <stdio.h>
void main(void)
{
	int n,val;
	printf("input the number of elements to store in the array : ");
	scanf("%d",&n);
	int arr[n],*ptr;
	ptr = arr;
	printf("enter the element of array :\n");
	for(int i= 0;i<n;i++)
	{
		printf("element - %d : ",1+i);
		scanf("%d",&ptr[i]);
	}
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < n-1;j++)
		{
		      if(ptr[j+1] < ptr[j])
			    {
				   val = *(ptr+j);
				   *(ptr+j) = *(ptr+j+1);
				   *(ptr+j+1) = val;
			    }
		}
		
	}
	printf("the element of array :\n");
	for(int i= 0;i<n;i++)
	{
	printf("element - %d : %d\n",i+1,ptr[i]);
	}
}