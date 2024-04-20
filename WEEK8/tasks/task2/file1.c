#include "file1.h"
struct data
{
	
		char name[88];
		int AO_money;
	struct data *next;
};
struct clints
{
	int id;
	struct data* current;	
	struct clints* NEXT;
};
struct clints* HEAD =NULL;


void E_family(int n)
{
	struct clints *pNEW;
	struct clints *pchk;
	if(HEAD == NULL)
	{
		pNEW = (struct clints*)malloc(sizeof(struct clints));
		HEAD = pNEW;
		pNEW->NEXT = NULL;
	}
	else
	{
		pchk = HEAD;
		while(pchk->NEXT != NULL)
			pchk = pchk ->NEXT;
		pNEW = (struct clints *)malloc(sizeof(struct clints));
		pchk ->NEXT= pNEW;
		pNEW->NEXT = NULL;
	}
	printf("enter the id of this family : ");fflush(stdin);fflush(stdout);
	scanf("%d",&(pNEW->id));fflush(stdin);fflush(stdout);
	pNEW->current=NULL;
	
	for(int i = 0; i<n;i++)
	{
	struct data *ptrN;
	struct data *ptrchk;
	if(pNEW->current == NULL)
	{
		ptrN = (struct data*)malloc(sizeof(struct data));
		pNEW->current = ptrN;
		pNEW->current->next = NULL;
	}
	else
	{
		ptrchk = pNEW->current;
		while(ptrchk->next != NULL)
			ptrchk = ptrchk->next;
		ptrN = (struct data *)malloc(sizeof(struct data));
		ptrchk ->next = ptrN;
		ptrN->next = NULL;
	}
	printf("enter the name of %dth member : ",i+1);fflush(stdin);fflush(stdout);
	scanf("%s",&(ptrN->name));fflush(stdin);fflush(stdout);
	printf("enter the %dth family member money  : ",i+1);fflush(stdin);fflush(stdout);
	scanf("%d",&(ptrN->AO_money));fflush(stdin);fflush(stdout);
	}
	
	 
}

void D_family(int id) //delete whole family family
{
	
	
	struct clints *ptrchk = HEAD;
	struct clints *ptrpre = NULL;
	if(HEAD)
	{
	    struct clints *ptrchk = HEAD;
	    struct clints *ptrpre = NULL;
	    while(ptrchk)
	    {
		    if(ptrchk->id==id)
			{
			    if(ptrpre)
				{
					ptrpre->NEXT = ptrchk->NEXT;
				}
				else
				{
					HEAD = ptrchk->NEXT;
				}
				free(ptrchk);
			}
			ptrpre = ptrchk;
			ptrchk = ptrchk->NEXT; 
		
		
	    }
	}
	 
}








void ANM_family(int id) //add new member for specific family
{
	struct clints *pNEW = HEAD;
	while(pNEW)
	{
	if(id == pNEW->id)
	{
	
	struct data *ptrN;
	struct data *ptrchk;
	if(pNEW->current == NULL)
	{
		printf("there is no family with that ID");fflush(stdin);fflush(stdout);
	}
	else
	{
		ptrchk = pNEW->current;
		while(ptrchk->next != NULL)
			ptrchk = ptrchk->next;
		ptrN = (struct data *)malloc(sizeof(struct data));
		ptrchk ->next = ptrN;
		ptrN->next = NULL;
	}
	printf("enter the name of member : ");fflush(stdin);fflush(stdout);
	scanf("%s",&(ptrN->name));fflush(stdin);fflush(stdout);
	printf("enter the new family member money  : ");fflush(stdin);fflush(stdout);
	scanf("%d",&(ptrN->AO_money));fflush(stdin);fflush(stdout);
	break;
	}
	
	}
	 
}

void DAM_family(int id,char NAME[]) //delete any member for specific family
{
	  
        
	
	struct clints *pNEW = HEAD;
	while(pNEW)
    {	
	if(id == pNEW->id)
	{
	
	struct data *ptrchk = pNEW->current;
	struct data *ptrpre = NULL;
	if(ptrchk == NULL)
	{
		printf("there is no family with that ID");fflush(stdin);fflush(stdout);
	}
	else
	{
		while(ptrchk){
		if(!stricmp( ptrchk->name , NAME ))
		{
			if(ptrpre)
				ptrpre->next  = ptrchk->next;
			else
			{
				pNEW->current = ptrchk->next;
				
			}
			free(ptrchk);
		
		}
		 ptrpre=ptrchk;
            ptrchk=ptrchk->next;
		
	}
	
	}
	break;
	}
	pNEW = pNEW->NEXT;
	
	}
}
	 

void EDM_family(int id,char NAME[]) //edit member for specific family
{
	  
        
	
	struct clints *pNEW = HEAD;
	while(pNEW)
    {	
	if(id == pNEW->id)
	{
	
	struct data *ptrchk = pNEW->current;
	if(ptrchk == NULL)
	{
		printf("there is no family with that ID");fflush(stdin);fflush(stdout);
	}
	else
	{
		while(ptrchk){
		if(!stricmp( ptrchk->name , NAME ))
		{
			char x ;
			printf("did U want to change name(a) or amount(b) of money or both(c) : ");fflush(stdin);fflush(stdout);
			scanf("%c",&x);fflush(stdin);fflush(stdout);
            switch(x)
			{
				case 'a':
				printf("enter the new name for this member : ");fflush(stdin);fflush(stdout);
				scanf("%s",&(ptrchk->name));fflush(stdin);fflush(stdout);
				break;
				case 'b':
				printf("enter the new amount if money for this member : ");fflush(stdin);fflush(stdout);
				scanf("%d",&(ptrchk->AO_money));fflush(stdin);fflush(stdout);
				break;
				case 'c':
				printf("enter the new name for this member : ");fflush(stdin);fflush(stdout);
				scanf("%s",&(ptrchk->name));fflush(stdin);fflush(stdout);
				printf("enter the new amount if money for this member : ");fflush(stdin);fflush(stdout);
				scanf("%d",&(ptrchk->AO_money));fflush(stdin);fflush(stdout);
				break;
			}			
		}
            ptrchk=ptrchk->next;
		
	}
	
	}
	break;
	}
	pNEW = pNEW->NEXT;
	
	}
}
	 














void all_clints()
{	
	if(HEAD != NULL)
	{
		struct data *temp;
		struct clints* pNEW = HEAD;
		
		while(pNEW)
		{
			printf("\nclint id : %d\n",pNEW->id);fflush(stdin);fflush(stdout);
			temp = pNEW->current;
			while(temp)
			{
				
				printf("Member : %s\n",temp->name);fflush(stdin);fflush(stdout);
				printf("Money : %d\n",temp->AO_money);fflush(stdin);fflush(stdout);
				
				temp = temp->next;
			}
			pNEW = pNEW->NEXT;
		}
	}	
	else
	{
		fflush(stdin);fflush(stdout);
		printf("there is no any family yet\n");
	}
		
}

void VWID_clints(int id)//view with id clints
{
	int x = 1;
	
	if(HEAD == NULL)
	{
		printf("there is no any family yet\n");fflush(stdin);fflush(stdout);
	}
	else
	{
		struct data *temp;  
		struct clints* pNEW = HEAD;
		
		while(pNEW)
		{
			if(id == pNEW->id)
			{
				temp = pNEW->current;
				//printf("\nclint id : %d\n",pNEW->id);fflush(stdin);fflush(stdout);
				while(temp)
				{
					x=0;
					printf("Member : %s\n",temp->name);fflush(stdin);fflush(stdout);
					printf("Money : %d\n",temp->AO_money);fflush(stdin);fflush(stdout);
				
					temp = temp->next;
				}
				break;
			}
			pNEW = pNEW->NEXT;
		}
		if(x)
			printf("this ID dose NOT exist\n");fflush(stdin);fflush(stdout);
		}
}






