#include <stdio.h>
#include <stdlib.h>

#include "ABR.h"



int main(){
	int tab[] = {0,1,2,3,4,5,6,7,8,9};
	int ordre = 10;
	noeud *n = NULL;
	printf("Arbre binaire : \n");
	arbre_binaire(tab,ordre,n,0);

	printf("Arbre de recherche  : \n");
	n = NULL;
	arbre_recherche(tab,ordre,n,0);

	printf("Arbre de recherche équilibré : \n");
	int *tab1;
	tab1 = tabtrie(tab,10);
	n = NULL;
	int test = ABR_equilibre(tab1,10,n,0);
	printf("Racine : %d",n->etiquette);
}
