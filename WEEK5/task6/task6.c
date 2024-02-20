#include<stdio.h>
void main(void)
{
    int n;
    printf("input the number of elements to store in the array : ");
	scanf("%d",&n);
	int arr[n],*ptr;
	ptr = arr;
	printf("input %d of element of array :\n",n);
	for(int i= 0;i<n;i++)
	{
		printf("element - %d : ",1+i);
		scanf("%d",&ptr[i]);
	}
	printf("the element of array in revers order are :\n",n);
	for(int i = n-1;i >= 0;i--)
	{
		printf("element - %d : %d\n",1+i,*(ptr+i));
		
	}
}