#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct tab
{
	int taille;
	int tab[100];
}tableau;

int alea(int n)
{
	int alea_n;
	alea_n = rand() % n;
	return alea_n;
}

void initTab(tableau *t)
{
	int i;
	(*t).taille = 10;
	for(i=0;i<(*t).taille;i++)
	{
		(*t).tab[i] =  alea(20);
	}
}

void afficheTab(tableau t)
{
	int i;
	for(i=0;i<t.taille;i++)
	{
		printf("%d / ", t.tab[i]);
	}
}

unsigned int produitTab(tableau t)
{
	unsigned int p;
	int i;
	p = 1;

	for(i=0;i<t.taille;i++)
	{
		p*=t.tab[i];
	}
	return p;
}

int minTab(tableau t)
{
	int i;
	int max = t.tab[0];
	for(i=1;i<t.taille;i++)
	{
		if(max < t.tab[i])
		{
			max = t.tab[i];
		}	
	}
	return max;
}

void decalTab(tableau *t)
{

	int i;
	(*t).taille++;
	for(i=(*t).taille;i>0;i--)
	{
		(*t).tab[i] = (*t).tab[i-1];
	}
	(*t).tab[0] = 0;
}

void triTab(tableau *t)
{
	int j,i,tmp;
	for(j=0;j<(*t).taille-1;j++)
	{
		for(i=0;i<(*t).taille-1;i++)
		{
			if((*t).tab[i] > (*t).tab[i+1] )
			{
				tmp = (*t).tab[i];
				(*t).tab[i] = (*t).tab[i+1];
				(*t).tab[i+1] = tmp;

			}
		}
	}
}


void inserTabTri(tableau *t)
{
	int value = 60;
	int j,i;
	j=0;
	while(value >= (*t).tab[j])
	{	
		j++;
	}
	(*t).taille++;
	for(i=(*t).taille;i>j;i++)
	{
		(*t).tab[i] = (*t).tab[i-1];		
	}
	(*t).tab[j] = value;
}

int main()
{
	time_t t;
	tableau tab;
	
	srand((unsigned int) time(&t));
	
	initTab(&tab);
	triTab(&tab);
	afficheTab(tab);
	printf("Taille : %d\n", tab.taille);

	inserTabTri(&tab);
	afficheTab(tab);
	printf("Taille : %d", tab.taille);

	return (0);
}
