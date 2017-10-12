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
	for(i=0;i<t.taille;i++)
	{
		(*t).tab[i] =  alea(20);
	}
}

void afficheTab(tableau t)
{
	int i;
	for(i=0;i<t.taille;i++)
	{
		printf("%d\n", t.tab[i]);
	}
}

int produitTab(tableau t)
{
	int p;
	int i;
	p = 1;

	for(i=0;i<t.taille;i++)
	{
		p*=t.tab[i];
	}
	return p;
}

int main()
{
	int a;
	time_t t;
	tableau tab;
	
	srand((unsigned int) time(&t));
	
	initTab(&tab);
	afficheTab(tab);

	return (0);
}