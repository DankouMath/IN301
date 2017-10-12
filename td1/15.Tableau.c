#include <stdio.h>


// A
void init_tab(int tab[], int l)
{
	int i;
	for(i=0;i<l;i++)
	{
		tab[i] = 1;
	}
}

// B
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

// C
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

// D
void decal_tab(int tab[], int l)
{
	int i;
	for(i=l-1;i>0;i--)
	{
		tab[i] = tab[i-1];
	}
	tab[0] = 0; 

	//AFFICHAGE
	for(i=0;i<l;i++)
	{
		printf("%d", tab[i]);
	}
}


// E
void insert_ttab(int tab_t[], int l, int value)
{
	int i=0;
	int i_insert;
	while(tab_t[i] <= value)
	{

		i++;
	}
	i_insert = i;
	for(i=l-1;i>i_insert;i--)
	{
		tab_t[i] = tab_t[i-1]; 
	}
	tab_t[i_insert] = value;

	//AFFICHAGE
	for(i=0;i<l;i++)
	{
		printf("%d ", tab_t[i]);
	}

}

// F
void inv_tab(int tab[], int l)
{
	int temp;
	int i;
	for(i=0;i<=l/2;i++)
	{
		temp = tab[l-i-1];
		tab[l-i-1] = tab[i];
		tab[i] = temp;
	}
	//AFFICHAGE
	for(i=0;i<l;i++)
	{
		printf("%d ", tab[i]);
	}
}

// G BUG~~
void suppr_doubl_tab(int tab[], int l)
{
	int i,j;
	int value;
	for(j=0;j<l;j++)
	{
		value = tab[j];
		for(i=j+1;i<l;i++)
		{
			if(tab[i] == value)
			{
				tab[i] = -value;
			}
		}

	}
	//AFFICHAGE
	for(i=0;i<l;i++)
	{
		printf("%d ", tab[i]);
	}
}

int main()
{
	int tab[5] = {1,1,1,1,5};
	suppr_doubl_tab(tab, 5);
}
