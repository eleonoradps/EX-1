#include <iostream>

// exercice 1.7


int main() {
	int a;
	int b;
	std::cout << "Peux-tu rentrer un entier a?";
	std::cin >> a;
	std::cout << "Peux-tu maintenant rentrer un entier b?";
	std::cin >> b;
	std::cout << "Voici la valeur a" << b << "choisie \n";
	std::cout << "Voici la valeur b" << a << "choisie \n";

	return EXIT_SUCCESS;
}