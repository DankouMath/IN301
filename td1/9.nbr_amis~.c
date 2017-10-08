#include <stdio.h>

int nbr_amis(int n, int m)
{
	int res_n=0;int res_m=0;int i = 1;
	while(i < n)
	{
		if(n % i== 0){res_n += i;}
		i++;
	}
	i = 1;
	while(i < m)
	{
		if(m % i== 0){res_m += i;}
		i++;
	}
	if(res_n == res_m)
	{
		printf("Ok");
		return 1;
	}
	else
	{
		printf("Nope");
		return 0;
	}
}


int main()
{
	nbr_amis(220,284);
	return 0;
}
