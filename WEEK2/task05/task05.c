#include <stdio.h>
#include <stdlib.h>
void main()
{
	int N , A , B;
	int i,sum = 0;
	printf("enter your range ");
	scanf("%d",& N);
	printf("enter the minimum of digit summation ");
	scanf("%d",& A);
	printf("enter the maximum of digit summation ");
	scanf("%d",& B);
	for ( i = 1; i <= N;i++)
	{
		int rem = (i % 10) + (i / 10);
		
		if ((rem >= A) && (rem <=B))
		{
			sum += i;
		}
	}
	
	printf("%d",sum);
	
	
}