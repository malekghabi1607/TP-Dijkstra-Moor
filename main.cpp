#include <iostream>
#include "utilities.h"

using namespace std;

int main()
{
    const int n = 8;
    int ctab[n][n] = {
        {0, 2, 0, 6, 0, 0, 0, 0},
        {2, 0, 2, 0, 7, 0, 0, 0},
        {0, 2, 0, 1, 0, 2, 0, 0},
        {6, 0, 1, 0, 0, 0, 4, 0},
        {0, 7, 0, 0, 0, 3, 0, 3},
        {0, 0, 2, 0, 3, 0, 2, 0},
        {0, 0, 0, 4, 0, 2, 0, 2},
        {0, 0, 0, 0, 3, 0, 2, 0}};

    // Conversion en tableau de pointeurs
    int *c[n];
    for (int i = 0; i < n; i++)
    {
        c[i] = ctab[i];
    }

    int d[n];  // Tableau des distances
    int s = 0; // Sommet source (0 correspond au sommet 1)

    mooredijkstra(c, d, n, s);

    cout << "Matrice d'adjacence :" << endl;
    affichage(c, n);

    cout << "Plus courts chemins depuis le sommet " << s + 1 << " :" << endl;
    affichage(d, n);

    return 0;
}
