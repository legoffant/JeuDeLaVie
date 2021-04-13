/*                                 *
 *       * JEU DE LA VIE *         *
 *                                 *
 * Version sans moteur graphique   *
 * dans un terminal                *
 * Date de création: 12 Avril 2021 *
 * Compilateur: GCC                *
 * Editeur de texte: Vim           *
 * Auteur: Anthony JR. Le Goff     * 
 * email: legoff.ant@gmail.com     */

#include<stdio.h>
#include<stdlib.h> 

// Etat des cellules
enum {
	dead, alive
};

// Taille de la matrice constante
#define LIGNE 80
#define COLONNE 180

/*                *
 *  Prototype de  *
 *  fonction      */

void initialisation(char matrix[LIGNE][COLONNE]);
void evolution(char matrix[LIGNE][COLONNE]);
void afficher_matrix(char matrix[LIGNE][COLONNE]);
int compter_voisinage(char matrix[LIGNE][COLONNE], int ligne, int colonne);


/*                   *
 * Boucle principale *
 *                   */


int main(void) {

	
	char matrix[LIGNE][COLONNE] = {dead};
	afficher_matrix(matrix);


	return 0;
	

	
}

// Afficher la grille format 180x80 et définir un cellule
void afficher_matrix(char matrix[LIGNE][COLONNE]) {
	int i,j;
	for(i = 0;i<LIGNE+2;i++) {
		printf("--");
	}
	printf("\n");
	for(j= 0;j<COLONNE+2;j++){
		printf("|\n");
	}


}

