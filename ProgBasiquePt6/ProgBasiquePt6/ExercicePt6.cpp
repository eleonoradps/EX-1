#include <iostream>


#include <iostream>


/* exercice 1.9

"Voici un exercice qui va me rendre ch�vre.
Pour le r�ussir je dois utiliser du code ASCII tout en n'oubliant pas les retours � la ligne. Bref �a me
saoule comme exercice."

*/


int main() {
	std::cout << "Voici un exercice qui va me rendre ch\x8Avre. \n\
Pour le r\x82ussir je dois utiliser du code ASCII tout en n\x27oubliant pas les retours \x85 la ligne. Bref \n\
\x87\x61 me saoule comme exercice.";

}