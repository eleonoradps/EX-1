#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>


/* exercice 1.10

Trouver :

La surface du champ en m2
Le nombre de vache maximum
Le nombre de vache au départ
Le nombre de vache qui peut être rajouter
La surface en m2 restante après avoir mis le nombre maximum de vache (si j’ai 3m2 alors il me reste 0.5m2 à la fin)

*/


int main() {
	srand(time(NULL));
	float largeur;
	float hauteur;
	int espaceVache = 2.5;

	std::cout << "Peux-tu donner la largeur de ton champ?";
	std::cin >> largeur;
	std::cout << "Peux-tu maintenant donner la hauteur de ton champ?";
	std::cin >> hauteur;

	int tailleChamp = largeur * hauteur * 1000;
	std::cout << "La taille du champ est de" << tailleChamp << "\n";

	int vacheMax = tailleChamp / hauteur;
	std::cout << "Le nombre de vache maximum est de" << vacheMax << "\n";

	int vacheDepart = rand() % vacheMax;
	std::cout << "Le nombre de vache au depart est de" << vacheDepart << "\n";

	int rajoutVache = vacheMax - vacheDepart;
	std::cout << "Le nombre de vache pouvant etre rajoute est de" << rajoutVache << "\n";

	int surfaceRestante = tailleChamp - (espaceVache * vacheDepart);
	std::cout << "La surface du champ en m2 est de" << surfaceRestante << "\n";

	return EXIT_SUCCESS;



}