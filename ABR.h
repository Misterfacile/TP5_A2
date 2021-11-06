
#ifndef ABR_H_
#define ABR_H_

typedef struct noeud{
	struct noeud *pere;
	char etiquette;
	int num;
	struct noeud *filsG, *filsD;
}noeud;
noeud *nouvNoeud(char c);
void choixMenu(void);
void espace(int espace);
void arbre_recherche(int *tab,int ordre, noeud *n,int ind);
int *tabtrie(int *tab,int ordre);
int ABR_equilibre(int *tab,int ordre, noeud *n, int profondeur);
void affichageArbre(noeud *n,int espace0);
void  affichage_arbre(noeud *n, int current_level, int max_level);



#endif /* ABR_H_ */
