
#include <iostream>
#include <fstream>
#include "utilities.h"

using namespace std;



/****************************************/
/* Objectif : Affichage de la matrice d'adjacence
/****************************************/
void affichage(int *c[], int n)
{
	cout << "c = " << endl;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < (n-1); j++)
			cout << c[i][j] << "\t";
		cout << c[i][n-1] << endl;		
	}

	cout << endl;
}


/****************************************/
/* Objectif : Affichage du tableau des plus courts
chemins
/****************************************/
void affichage(int d[], int n)
{
	cout << "d = " << endl;
	for(int i = 0; i < n-1; i++)
		cout << d[i] << "\t";
	
	cout << d[n-1] << endl << endl;		
}



/****************************************/
/* Objectif : Algorithme de calcul des plus courts
dans un graphe dont les arcs ont des longueurs positives.
- c : matrice de longueur de chaque arc
- d : tableau des plus courts chemins
- pere : tableau donnant pour chaque sommet i son prédecesseur
pred[i] dans le plus court chemin.
- n : nombre de sommets du graphe
- s : sommet origine d'où les plus courts chemins sont calculés
/****************************************/
void mooredijkstra(int *c[], int d[], int n, int s)
{
	// A faire
}
