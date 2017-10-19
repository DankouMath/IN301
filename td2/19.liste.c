#include <stdio.h>
#include <stdlib.h>

struct element
{
	int val;
	struct element* suiv;
};
typedef struct element* Liste;

Liste creerListe()
{
	return NULL;
}	

int estVide(Liste l)
{
	return l == NULL;
}

void affiche(Liste l)
{
	while(!estVide(l))
	{
		printf("%d\n", (*l).val);//l->val
		l = (*l).suiv;
		//l->suiv
	}
}

void afficheR(Liste l)
{
	if(!estVide(l))
	{
		printf("%d\n", l->val);
		afficheR(l->suiv);
	}
}

Liste creerElem(int n)
{
	Liste l;
	l = malloc(sizeof(struct element));
	if(l==NULL)
	{
		printf("Allocation mémoire echouée\n");
		exit(EXIT_FAILURE);
	}
	l->val = n;
	l->suiv = NULL;
	return l;
}

Liste insereDeb(Liste l, int n)
{
	Liste lres = creerElem(n);
	lres->suiv = l;
	return lres;
}

Liste libere(Liste l)
{
	if(!estVide(l))
	{
		l->suiv = libere(l->suiv);
		free(l);
	}
	return NULL;
}

Liste insereFin(Liste l, int n)
{
	Liste ltmp,l2;
	ltmp = creerElem(n);
	if(estVide(l))
	{
		return ltmp;
	}
	l2 = l;
	while(!estVide(l->suiv))
	{
	  l = l->suiv;
	}
	l->suiv = ltmp;
	return l2;
}

Liste inserTrie(Liste l, int n)
{
	Liste ltmp = creerElem(n);
	if(estVide(l) || n <l->val )
		return insereDeb(l,n);
	l2 = l;
	while(!estVide(l->suiv) && l->suiv->val  < n)
	{
		l = l->suiv;
	}
	ltmp = creerElem(n);
	ltmp = l->suiv;
       	l->suiv = ltmp;
	return l2;	
}

int main()
{
	Liste l = creerListe();
	l = creerElem(3);
	l = insereFin(l,5);
	affiche(l);
	l = libere(l);
	return 0;
}
