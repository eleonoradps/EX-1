#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

/* exercice 1.6

Écrire un programme qui demande à l’utilisateur de taper 5 entier et qui affiche la moyenne.

*/

int entierTot = 5;
int entier1 = 0;
int entier2 = 0;
int entier3 = 0;
int entier4 = 0;
int entier5 = 0;
float MoyenneTot = 0;

int main() {

	std::cout << "Peux-tu taper cinq entier?";
	std::cin >> entier1;
	std::cin >> entier2;
	std::cin >> entier3;
	std::cin >> entier4;
	std::cin >> entier5;

	int entierTot = 5;
	float addition = entier1 + entier2 + entier3 + entier4 + entier5;
	std::cout << "Voici la somme des entiers" << addition << "\n";

	float MoyenneTot = addition / entierTot;
	std::cout << "Voici la moyenne des entiers" << MoyenneTot << "\n";

}