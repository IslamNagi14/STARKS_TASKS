#include<stdio.h>
#include<stdlib.h>

struct values
{
	int num;
	struct values *next;
};

struct values* add_VAL(int n)
{
	struct values * Head = NULL;
	struct values *ptrN;
	struct values *ptrchk;
	for(int i = 0;i<n;i++)
	{
	if(Head == NULL)
	{
		ptrN = (struct values*)malloc(sizeof(struct values));
		Head = ptrN;
	}
	else
	{
		ptrchk = Head;
		while(ptrchk->next != NULL)
			ptrchk= ptrchk ->next;
		ptrN = (struct values*)malloc(sizeof(struct values));
		ptrchk->next=ptrN;
	}
	ptrN->next = NULL;
	printf("enter %dth node value : ",i+1);
	scanf("%d",&(ptrN->num));
	}
	return Head;
	
}

void G_middle(struct values* Head,int n)
{
	struct values* current;
	current = Head;
	int x = 0;
	for(int i = 1;i <= n;i++)
	{
		if((n % 2 == 0) && ((i == n / 2) || (i == n / 2 + 1)))
		{
			printf("Middle element %d : %d\n",++x,current->num);
		}
		else if(i == n / 2 + 1)
		{
			printf("Middle element %d : %d\n",++x,current->num);
		}
		current = current->next;
	}
	free(current);
	
}









void main()
{
	while(1)
	{
		int n;
		printf("enter the list length : ");
		scanf("%d",&n);
	
	G_middle(add_VAL(n),n);
	}
}