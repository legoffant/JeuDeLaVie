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
#define ALIVE 1
#define DEAD 0

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

	return 0;
	
	
}

