/*
Jerry 
Math-pro2
main.cpp

Enumeration
*/

#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
	bool ord, rep;
	int oChoisir, oDispo;

	cout << "Enter s'il y a une ordre: " << endl;
	cin >> ord;
	cout << "Enter s'il y a une repetition: " << endl;
	cin >> rep;
	cout << "Enter le nombre d'objet a choisir: " << endl;
	cin >> oChoisir;
	cout << "Enter le nombre d'objet disponibles: " << endl;
	cin >> oDispo;

	//test input
	cout << ord << " " << rep << " " << oChoisir << " " << oDispo << endl;




	system("PAUSE");

	return 0;
}
