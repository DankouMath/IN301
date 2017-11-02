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

Liste insereTrie(Liste l, int n)
{
	Liste l2;
	Liste ltmp = creerElem(n);
	if(estVide(l) || n < l->val )
	{
		return insereDeb(l,n);
	}
	l2 = l;
	while(!estVide(l->suiv) && l->val < n)
	{
		l = l->suiv;
	}
	l->suiv = creerElem(n);
	ltmp = l->suiv;
       	l->suiv = ltmp;
	return l2;
}

Liste insereTrieR(Liste l, int n)
{
	if(estVide(l) || n < l->val)
	{
			return insereDeb(l,n);
	}
	l->suiv = insereTrieR(l->suiv,n);
	return l;
}

int estTrie(Liste l)
{
	while(!estVide(l) && !estVide(l->suiv))
	{
		if(l->val > l->suiv->val)
		{
			return 0;
		}
		else
		{
			l = l->suiv;
		}
		return 1;
	}
}

int estTrieR(Liste l)
{
	if(estVide(l) || estVide(l->suiv))
	{
		return 1;
	}
	if(l->val > l->suiv->val)
	{
		return 0;
	}
	else
	{
		estTrieR(l->suiv);
	}
}
//D
int nbElemListe(Liste l)
{
	int i=0;
	while(!estVide(l))
	{
		l = l->suiv;
		i++;
	}
	return i;
}	

//E
int recherElem(Liste l, int x)
{
	while(!estVide(l))
	{
		if(l->val == x)
			return 1;
		l = l->suiv;
	}
	return 0;
}

//F
Liste supprElem(Liste l, int n)
{
	Liste lcour, lpred;
	if(estVide(l)) return l;
	if(l->val == n)
	{
		lcour = l->suiv;
		free(l);
		return lcour;
	}
	lpred = l; lcour = l->suiv;
	while(!estVide(lcour))
	{
		if(lcour->val==n)
		{
			lpred->suiv = lcour->suiv;
			free(lcour);
			return l;
		}
		lpred = lcour;
		lcour = lcour->suiv;
	}
	return l;
}

Liste supprElemR(Liste l, int n)
{
	Liste lcour;
	if(estVide(l)) return l;
	if(l->val == n)
	{
		lcour = l->suiv;
		free(l);
		return lcour;
	}
	l->suiv = supprElemR(l->suiv, n);
	return l;
}

//G
Liste concatListe(Liste l, Liste l2)
{
	if(estVide(l)) return l2
	Liste base = l;
	while(!estVide(l->suiv))
	{
		l = l->suiv;
	}
	l->suiv = l2; 
	return base;
}

Liste concatListeR(liste l1, liste l2)
{
	if(estVide(l1)) return l2;
	l1->suiv = concatListR(l1->suiv, l2)
	return l1;
}

//H
Liste fusion(Liste l1, Liste l2)
{
	if(estVide(l1)) return l2;
	if(estVide(l2)) return l1;
	if(l1->val < l2->val)
	{
		l1->suiv = fusion(l1->suiv, l2);
		return l1;
	}
	else
	{
		l2->suiv = fusion(l1,l2->suiv);
		return l2;
	}
}

int main()
{
	Liste l = creerListe();
	Liste l2 = creerListe();
	l = insereDeb(l,2);
	l = insereDeb(l,1);
	affiche(l);
	printf("\n");
	concatListe(l, l2);
	affiche(l);
	l = libere(l);
	return 0;
}
