#include <iostream>

// exercice 1.0, 1.1, 1.2, 1.3


// exercice 1.0


/*exercice 1.3


commentaires: 

programme commence par la phrase "Hello world!"
appuie sur une touche puis pose la question "How old are you?"
le programme r�cup�re la donn�e
le programme r�pond apr�s r�cup�ration de la donn�e

*/

int main() {
	std::cout << "Hello world!\n";
	system("pause");



// exercice 1.1 et 1.2


	int age;
	std::cout << "How old are you?"; // demande de l'�ge � l'user
	std::cin >> age; // r�cup�ration de la donn�e
	std::cout << "Congratulations you are" << age << "years old"; //r�ponse suite � la r�cup�ration de la donn�e
	return EXIT_SUCCESS;
}

