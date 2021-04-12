# Jeu de la Vie de Conway implanté en C 

## Historique

John Horton Conway est un mathématicien qui a éxercé à l'Université de Cambridge puis à Princeton. Très prolifique en jeu mathématique à travers en particulier une publication qui l'a fait connaitre du grand public dans "Scientific American" dans la rubrique "Mathematical Game" du jeu de la vie.

Conway était intéressé par l'étude de trouver une hypothétique machine qui pourrait s'auto-reproduire. Il essaya de simplifier les idées de Von Neumann et finis par réussir.

Cela ouvrit un nouveau champ de recherche en mathématique celui des `automates cellulaires`. En effet les analogies du jeu de la vie avec le développement, le déclin et les altérations d'une colonie de micro-organismes, le rapprochent des jeux de simulation qui miment les processus de la vie réelle.

Le jeu de la vie est un "jeu à zéro joueur" qui ne nécessite pas d'intervention du joueur lors de son déroulement. Tout fonctionne selon des règles pré-établie selon le modèle.

## Constructeurs universels

En 2010, Gemini, le tout premier constructeur universel du jeu de la vie a été découvert. Cette immense figure fait 4217807 cellules sur 4220191. En avançant, cette figure crée une copie d'elle même en détruisant la précédente. 

Le jeu de la vie a prouvé qu'il est Turing complet par l'existence de portes logiques ET, OU, NON. Ces portes permettent de coder une machine de Turing universelle.

## Règles du jeu

Le jeu de la vie se joue normalement sur un damier infini mais programmer sur un ordinateur l'espace est délimité par la mémoire. Il y a deux états une céllule est soit:

* Vivante
* Morte

Le jeu est évolutif et à chaque nouvelle génération des cellules peuvent naître, mourir ou rester dans son état.

Les règles pour passer d'une génération à une autre sont précises et choisies avec soin pour que l'évolution des organismes soit intéressante et imprévisible. On considère que une cellule peut avoir `8 voisins` sur le damier. On obtient comme règle:

* Une cellule vivante ayant exactement 2 ou 3 voisins vivants survit à la génération suivante.
* Une cellule vivante ayant 4 à 8 cellules voisines vivantes meurt d'étouffement à la génération suivante.
* Une cellule vivante ayant zéro ou une cellule voisine vivante meurt d'isolemement à la génération suivante.
* Sur une case vide ayant exactement 3 voisins vivants, cellule naîtra à la génération suivante.


## Analyse du programme

Nous considérons que toutes les cellules sont stockées dans une matrice. Pour une case m[i][j], les huit voisins sont:

```bash
m[i-1][j], m[i+1][j], m[i][j-1], m[i][j+1], m[i-1][j-1], m[i+1][j+1], m[i+1][j-1], m[i-1][j+1]
```


