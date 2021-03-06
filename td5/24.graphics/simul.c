#include "graphics.h"
#include "type.h"
#include "liste.h"
#define NB_POINTS  20

void simulChaine(){
  Liste l = NULL;
  int i = 0;
  char c;
  POINT p;
  while(i < NB_POINTS){
    p = wait_key_or_clic(&c);
    if(c == 0){//ajoute un point
      l = ajoutDebut(l, p);
      i++;
    }
    else if(c == 'a'){//annule le dernier point
      l = supprimeDebut(l);
      i--;
    }
    else if(c == 'z'){
	  l = supprimeFin(l);
	  i--;
	}
    dessineListe(l);
  }
}
