# TP - Algorithme de Dijkstra

## 🎯 Objectif

Ce TP consiste à implémenter l'algorithme de Dijkstra pour déterminer les plus courts chemins dans un graphe simple, pondéré, avec des longueurs d'arêtes **strictement positives**.

Le graphe est représenté par une **matrice d'adjacence pondérée**.

---

## 📌 Exemple de graphe

Voici un exemple utilisé pour les tests :

<img width="469" alt="Capture d’écran 2025-03-29 à 11 40 46" src="https://github.com/user-attachments/assets/56b24f05-3004-48a3-b40a-3732de8fa316" />


---

## 📂 Fichiers

- `utilities.h` : Fichier d'en-tête avec les déclarations de fonctions.
- `utilities.cpp` : Contient l'affichage de la matrice et du tableau des distances, et **l'algorithme de Dijkstra à implémenter**.
- `main.cpp` : Contient le point d'entrée du programme et des tests à ajouter.

---

## 📌 Représentation du graphe

Dans le tableau `c[i][j]`, la valeur est :
- `0` si aucune arête entre i et j,
- Sinon, la **longueur positive** de l'arête.

Exemple :

```cpp
int c[8][8] = {
    {0,2,0,6,0,0,0,0},
    {2,0,2,0,7,0,0,0},
    {0,2,0,1,0,2,0,0},
    {6,0,1,0,0,0,4,0},
    {0,7,0,0,0,3,0,3},
    {0,0,2,0,3,0,2,0},
    {0,0,0,4,0,2,0,2},
    {0,0,0,0,3,0,2,0}
};
```
---

## 🧪 Compilation


```bash
g++ main.cpp utilities.cpp -o dijkstra
./dijkstra
```

<img width="551" alt="Capture d’écran 2025-03-29 à 11 58 50" src="https://github.com/user-attachments/assets/0bd70bc0-db7e-4a38-8cdb-66bb9cb809e5" />


---

## 👤 Auteur

**Malek** – Licence 2 Informatique  
Université d’Avignon – Année 2024/2025


