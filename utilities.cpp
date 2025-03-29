
#include <iostream>
#include <fstream>
#include "utilities.h"

using namespace std;



/***************************************
 Objectif : Affichage de la matrice d'adjacence
***************************************/
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


/***************************************
Objectif : Affichage du tableau des plus courts
chemins
***************************************/
void affichage(int d[], int n)
{
	cout << "d = " << endl;
	for(int i = 0; i < n-1; i++)
		cout << d[i] << "\t";
	
	cout << d[n-1] << endl << endl;		
}



/***************************************
Objectif : Algorithme de calcul des plus courts
dans un graphe dont les arcs ont des longueurs positives.
- c : matrice de longueur de chaque arc
- d : tableau des plus courts chemins
- pere : tableau donnant pour chaque sommet i son prédecesseur
pred[i] dans le plus court chemin.
- n : nombre de sommets du graphe
- s : sommet origine d'où les plus courts chemins sont calculés
***************************************/
void mooredijkstra(int *c[], int d[], int n, int s)
{
	const int INF = 1e9; // Représente l'infini
	bool visite[n];

	// Initialisation
	for (int i = 0; i < n; i++)
	{
		d[i] = INF;
		visite[i] = false;
	}

	d[s] = 0;

	for (int count = 0; count < n - 1; count++)
	{
		// Trouver le sommet u non visité avec la plus petite distance
		int u = -1;
		int min = INF;

		for (int i = 0; i < n; i++)
		{
			if (!visite[i] && d[i] < min)
			{
				min = d[i];
				u = i;
			}
		}

		if (u == -1)
			break; // Tous les sommets accessibles ont été visités

		visite[u] = true;

		// Mise à jour des distances
		for (int v = 0; v < n; v++)
		{
			if (c[u][v] > 0 && !visite[v] && d[u] + c[u][v] < d[v])
			{
				d[v] = d[u] + c[u][v];
			}
		}
	}
}
