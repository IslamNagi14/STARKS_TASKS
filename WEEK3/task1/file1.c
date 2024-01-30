
int rev_num(int a)
{
	int r=0;
	for(;;)
	{
		if(a>0)
		{
		r=(r*10)+(a%10);
		a/=10;
		}
		else
		{break;}
	}
	return r;
}