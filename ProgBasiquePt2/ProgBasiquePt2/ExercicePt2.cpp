#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>


int main() { // exercice 1.4
	int rayon;
	std::cout << "Quel est le rayon d'un cercle?";
	std::cin >> rayon;

	int calculPerimetre = 2 * M_PI * rayon;
	std::cout << "Voici le perimetre" << 2 * M_PI * rayon;

	int calculAire = M_PI * rayon * rayon;
	std::cout << "Voici l'aire" << M_PI * rayon * rayon;
	system("pause");


	//exercice 1.5


	std::cout << "calcul Aire = " << calculAire << "\n";
	std::cout << "calcul Perimetre = " << calculPerimetre << "\n";

	int Perimetre(rayon);
	return 2 * M_PI * rayon;

	int Aire(rayon);
	return M_PI * rayon * rayon;
}