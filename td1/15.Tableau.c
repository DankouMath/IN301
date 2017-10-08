#include <stdio.h>

void init_tab(int tab[], int l)
{
	int i;
	for(i=0;i<l;i++)
	{
		tab[i] = 1;
	}
}

void prod_tab(int tab[], int l)
{
	int i;
	int res = 1;
	for(i=0;i<l;i++)
	{
		res*=tab[i];
	}
	printf("%d", res);
}

int min_tab(int tab[], int l)
{
	int i;
	int min = tab[0];
	for(i=1;i<=l-1;i++)
	{
		if(min>tab[i])
		{
			min = tab[i];
		}
	}
	printf("%d", min);
	return min;
}


int main()
{
	int tab[5] = {7,1,3,5,2};
	min_tab(tab, 5);
}
