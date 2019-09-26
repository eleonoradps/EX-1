#include <iostream>


// exercice 1.8

int main() {
	char first, second;
	std::cout << "Write your full name";
	first = std::cin.get();
	std::cin.ignore(256,' ');

	second = std::cin.get();
	std::cout << "Your initials are" << first << second << "\n";

}