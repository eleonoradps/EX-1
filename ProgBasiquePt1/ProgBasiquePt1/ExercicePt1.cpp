#include <iostream>

// exercice 1.0, 1.1, 1.2, 1.3


// exercice 1.0


/*exercice 1.3


commentaires: 

programme commence par la phrase "Hello world!"
appuie sur une touche puis pose la question "How old are you?"
le programme récupère la donnée
le programme répond après récupération de la donnée

*/

int main() {
	std::cout << "Hello world!\n";
	system("pause");



// exercice 1.1 et 1.2


	int age;
	std::cout << "How old are you?"; // demande de l'âge à l'user
	std::cin >> age; // récupération de la donnée
	std::cout << "Congratulations you are" << age << "years old"; //réponse suite à la récupération de la donnée
	return EXIT_SUCCESS;
}

