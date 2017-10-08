
int syracuse(int n)
{
	if(n==1){return 0;}
	else
	{
		if(n%2==0)
		{
			n/=2;
		}
		else
		{
			n = 3 * n + 1;
		}
		return 1 + syracuse(n);
	}

}
