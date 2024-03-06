#include<stdio.h>
#include<string.h>

// implementation to select mode
char S_mode()
{   char mode;
	printf("a)Admin mode\tb)User mode\nenter your mode : ");fflush(stdin);fflush(stdout);
	scanf("%c",&mode);
	return mode;
}
//subscriber login
int s_log()
{
	char name[100];
	int pas;
	printf("enter your name : ");
	gets(name);
	for(int i = 0;i<4;i++)
	{
		if(!strcmp(name,"islam"))
		{
			for(int j = 0;j<3;j++)
			{
				printf("enter the correct password : ");
				scanf("%d",&pas);
				if(pas == 123)
					return 1;
				else
				{
					printf("wrong password\n");
					if(j==2)
						return 0;
					
				}
			}
		}
		else
		{
			printf("this user dosen't exist ");
			return 0;
		}
	}
	
}
void list(int molto,int biscuits,int tea,int coffee,int cola,int miranda,int mint,int strawberry)
{
	char nd,dnd;
	printf("1)molto %d$\n2)biscuits %d$\n",molto,biscuits);
	printf("do you need any drinke a)yes  b)no\n");
	fflush(stdin);fflush(stdout);
	scanf("%c",&nd);
	fflush(stdin);fflush(stdout);
	if(nd== 'a')
	{
		printf("a)hot or b)cold : ");
		scanf("%c",&dnd);
		fflush(stdin);fflush(stdout);
		if(dnd == 'a')
			printf("3)tea %d$\n4)coffee  %d$", tea,coffee);
		else if(dnd == 'b')
		{
			printf("5)cola %d$\n6)miranda %d$\n",cola,miranda);
			printf("you can add some flavors\n7)mint %d$   8)strawberry %d$",mint,strawberry);
			
		}
		
	}
}
//selecting and make a receipt
int select_break(int* a_molto,int* a_biscuits,int* a_tea,int *a_coffee, int* a_cola,int* a_miranda,int* a_mint , int* a_strawberry,
		int molto,int biscuits,int tea,int coffee, int cola,int miranda,int mint , int strawberry)
{
	int ch ,typ,sum= 0;
	int mo,b,t,cf,c,mi,m,s;
	 mo=b=t=cf=c=mi=m=s=0;
	printf("\ndo you need to add something to your breakfast : \n1)yes 0)no\t");
	fflush(stdin);fflush(stdout);
	scanf("%d",&ch);
	for(;ch;)
	{
		printf("enter what do you want : ");
		scanf("%d",&typ);
		switch(typ)
		{
			case 1:
			if(*a_molto == 0)
			{
				printf("this element is sold out...\n");
				break;
			}
			sum+=molto;
			mo++;
			(*a_molto)--;
			break;
			case 2:
				if(*a_biscuits == 0)
			{
				printf("this element is sold out...\n");
				break;
			}
			sum+= biscuits;
			b++;
			(*a_biscuits)--;
			break;
			case 3:
				if(*a_tea == 0)
			{
				printf("this element is sold out...\n");
				break;
			}
			sum+=tea;
			t++;
			(*a_tea)--;
			break;
			case 4:
				if(*a_coffee == 0)
			{
				printf("this element is sold out...\n");
				break;
			}
			sum+=coffee;cf++;
			(*a_coffee)--;
			break;
			case 5:
				if(*a_cola == 0)
			{
				printf("this element is sold out...\n");
				break;
			}
			sum+=cola;c++;
			(*a_cola)--;
			break;
			case 6:
				if(*a_miranda == 0)
			{
				printf("this element is sold out...\n");
				break;
			}
			sum+= miranda;mi++;
			(*a_miranda)--;
			break;
			case 7:
				if(*a_mint == 0)
			{
				printf("this element is sold out...\n");
				break;
			}
			sum+=mint;m++;
			(*a_mint)--;
			break;
			case 8:
				if(*a_strawberry == 0)
			{
				printf("this element is sold out...\n");
				break;
			}
			sum+=strawberry;s++;
			(*a_strawberry)--;
			break;
		}
		printf("do you need to add another somthing : \n1)yes 0)no\t");
	fflush(stdin);fflush(stdout);
	scanf("%d",&ch);
		
	}
	printf("your receipt\n%d molto\n%d biscuits\n%d tea\n%d coffee\n%d cola\n%d miranda\n%d mint\n%d  strawberry\
	\n",mo,b,t,cf,c,mi,m,s);
	return sum;
	
}

// check subscriber card
void check_scard(int *card,int sum)
	{
		if(*card >= sum)
		{
			(*card)-=sum;
			printf("payment successes and your card balance is : %d",*card);
		}
		else
		{
			printf("payment failed you have to pay cash\n");
		}
		
	}
	//admin view
	//admin view
		void machitim(int a_molto,int a_biscuits,int a_tea,int a_coffee, int a_cola,int a_miranda,int a_mint , int a_strawberry,
		int molto,int biscuits,int tea,int coffee, int cola,int miranda,int mint , int strawberry)
	{
		
		printf("all items in the machine\n1) %d molto %d$\n2) %d biscuits   %d$\n3) %d tea  %d$\n4) %d coffee  %d$\n5) %d cola  %d$\n6) %d miranda  %d$\n7) %d mint %d$ \n8) %d  strawberry%d$\
	\n",a_molto,molto, a_biscuits,biscuits,a_tea,tea, a_coffee,coffee, a_cola,cola, a_miranda,miranda, a_mint,mint , a_strawberry,strawberry);
		
		
	}
	
	
	//admin editing
void admin_editing(int* a_molto,int* a_biscuits,int* a_tea,int* a_coffee, int* a_cola,int* a_miranda,int* a_mint , int* a_strawberry,
		int* molto,int* biscuits,int* tea,int* coffee, int* cola,int* miranda,int* mint , int* strawberry)
		{
			char ch;int x;
			printf("do you need to make any change enter the element if no enter '0' : ");
			fflush(stdin);fflush(stdout);
			scanf("%d",&x);
			for(;x;)
			{
				switch(x)
		{
			case 1:
			fflush(stdin);fflush(stdout);
			printf("do you want to change a) amount or b) price : ");fflush(stdin);fflush(stdout);
			scanf("%c",&ch);fflush(stdin);fflush(stdout);
			switch(ch)
			{
				case 'a':
				printf("enter the new amount : ");fflush(stdin);fflush(stdout);
				scanf("%d",a_molto);fflush(stdin);fflush(stdout);
				break;
				case 'b':
				printf("enter the new price : ");fflush(stdin);fflush(stdout);
				scanf("%d",molto);break;
			}
			break;
			case 2:
			fflush(stdin);fflush(stdout);
			printf("do you want to change a) amount or b) price : ");fflush(stdin);fflush(stdout);
			scanf("%c",&ch);fflush(stdin);fflush(stdout);
			switch(ch)
			{
				case 'a':
				printf("enter the new amount : ");fflush(stdin);fflush(stdout);
				scanf("%d",a_biscuits);fflush(stdin);fflush(stdout);
				break;
				case 'b':
				printf("enter the new price : ");fflush(stdin);fflush(stdout);
				scanf("%d",biscuits);fflush(stdin);fflush(stdout);break;
			}
			
			break;
			case 3:
	        printf("do you want to change a) amount or b) price : ");fflush(stdin);fflush(stdout);
			scanf("%c",&ch);fflush(stdin);fflush(stdout);
			switch(ch)
			{
				case 'a':
				printf("enter the new amount : ");fflush(stdin);fflush(stdout);
				scanf("%d",a_tea);fflush(stdin);fflush(stdout);break;
				case 'b':
				printf("enter the new price : ");fflush(stdin);fflush(stdout);
				scanf("%d",tea);fflush(stdin);fflush(stdout);break;
			}			
			break;
			case 4:
			printf("do you want to change a) amount or b) price : ");fflush(stdin);fflush(stdout);
			scanf("%c",&ch);fflush(stdin);fflush(stdout);
			switch(ch)
			{
				case 'a':
				printf("enter the new amount : ");fflush(stdin);fflush(stdout);
				scanf("%d",a_coffee);fflush(stdin);fflush(stdout);break;
				case 'b':
				printf("enter the new price : ");fflush(stdin);fflush(stdout);
				scanf("%d",coffee);fflush(stdin);fflush(stdout);break;
			}
			break;
			case 5:
			printf("do you want to change a) amount or b) price : ");fflush(stdin);fflush(stdout);
			scanf("%c",&ch);fflush(stdin);fflush(stdout);
			switch(ch)
			{
				case 'a':
				printf("enter the new amount : ");fflush(stdin);fflush(stdout);
				scanf("%d",a_cola);fflush(stdin);fflush(stdout);break;
				case 'b':
				printf("enter the new price : ");fflush(stdin);fflush(stdout);
				scanf("%d",cola);fflush(stdin);fflush(stdout);break;
			}
			break;
			case 6:
			printf("do you want to change a) amount or b) price : ");fflush(stdin);fflush(stdout);
			scanf("%c",&ch);fflush(stdin);fflush(stdout);
			switch(ch)
			{
				case 'a':
				printf("enter the new amount : ");fflush(stdin);fflush(stdout);
				scanf("%d",a_miranda);fflush(stdin);fflush(stdout);break;
				case 'b':
				printf("enter the new price : ");fflush(stdin);fflush(stdout);
				scanf("%d",miranda);break;
			}
			 
			break;
			case 7:
			printf("do you want to change a) amount or b) price : ");fflush(stdin);fflush(stdout);
			scanf("%c",&ch);fflush(stdin);fflush(stdout);
			switch(ch)
			{
				case 'a':
				printf("enter the new amount : ");fflush(stdin);fflush(stdout);
				scanf("%d",a_mint);fflush(stdin);fflush(stdout);break;
				case 'b':
				printf("enter the new price : ");fflush(stdin);fflush(stdout);
				scanf("%d",mint);fflush(stdin);fflush(stdout);break;
			}
			
			break;
			case 8:
			printf("do you want to change a) amount or b) price : ");fflush(stdin);fflush(stdout);
			scanf("%c",&ch);fflush(stdin);fflush(stdout);
			switch(ch)
			{
				case 'a':
				printf("enter the new amount : ");fflush(stdin);fflush(stdout);
				scanf("%d",a_strawberry);fflush(stdin);fflush(stdout);break;
				case 'b':
				printf("enter the new price : ");fflush(stdin);fflush(stdout);
				scanf("%d",strawberry);fflush(stdin);fflush(stdout);break;
			}
			break;
		}
		printf("do you need to make another change enter the element if no enter '0' : ");fflush(stdin);fflush(stdout);
		scanf("%d",&x);
			}
			
			
			
			
		}
				//admin login
void admin_login(int A_id,int A_pas,int* a_molto,int* a_biscuits,int* a_tea,int* a_coffee, int* a_cola,int* a_miranda,int* a_mint , int* a_strawberry,
		int* molto,int* biscuits,int* tea,int* coffee, int* cola,int* miranda,int* mint , int* strawberry)
{
	int id,pas;
	printf("enter your ID : ");
	scanf("%d",&id);
	printf("enter your password : ");
    scanf("%d",&pas);	
	if(id == A_id && pas == A_pas)
	{
		machitim(*a_molto, *a_biscuits,*a_tea,* a_coffee,* a_cola,* a_miranda,* a_mint , *a_strawberry,* molto,* biscuits,*tea, *coffee, *cola, *miranda, *mint , *strawberry);
		admin_editing(a_molto, a_biscuits,a_tea, a_coffee, a_cola, a_miranda, a_mint , a_strawberry, molto, biscuits,tea, coffee, cola, miranda, mint , strawberry);
	}
	else
	{
	printf("wrong password or id, try again");	
	}
	
}
