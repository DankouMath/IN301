#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>

struct elemc{
		char val;
		struct elemc* suiv;
};typedef struct elemc* ListeC;

ListeC ceerList()
{
		return NULL;
}

void afficheChaine(ListeC c)
{
	while(c != NULL)
	{
		printf("%c", c->val);
		c = c->suiv;
	}
}

ListeC ajoutChaine(char *t, ListeC l)
{
	
}

int main(int argc, char **argv)
{
	
}
