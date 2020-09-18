/*
Jerry
Math-pro2
main.cpp

Enumeration
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include <chrono>

using namespace std;

//dispo^choix
int ordANDrep(int choix, int dispo) {
	int ret = 1;



	return ret;
}

//dispo!/(dispo-choix)!
int ordANDnoRep(int choix, int dispo) {
	int ret = 1;


	return ret;
}

//permu
int noOrdANDrep(int choix, int dispo) {
	int ret = 1;


	return ret;
}

//combination
int noOrdANDnoRep(int choix, int dispo) {
	int ret = 1;

	fstream myFile;
	myFile.open("/possibility.txt");

	string bitmask(choix, 1); // K leading 1's
	bitmask.resize(dispo, 0); // N-K trailing 0's

						  // print integers and permute bitmask
	do {
		myFile << ret << ". ";
		for (int i = 0; i < dispo; ++i) // [0..N-1] integers
		{
			if (bitmask[i]) myFile << i << ",";
		}
		myFile << "\n";
		ret++;
	} while (prev_permutation(bitmask.begin(), bitmask.end()));
	
	myFile.close();

	return ret;
}

int main()
{

	
	bool ord, rep;
	int oChoisir, oDispo;

	cout << "Enter s'il y a une ordre: " << endl;
	cin >> ord;
	cout << "Enter s'il y a une repetition: " << endl;
	cin >> rep;
	cout << "Enter le nombre d'objet a choisir: " << endl;
	//r
	cin >> oChoisir;
	cout << "Enter le nombre d'objet disponibles: " << endl;
	//n
	cin >> oDispo;

	//test input
	cout << ord << " " << rep << " " << oChoisir << " " << oDispo << endl;

	int pos;

	if (ord && rep) {
		pos = ordANDrep(oChoisir, oDispo);
		cout << "On a trouve : " << pos - 1 << " possibilite" << endl;		
	}
	else if (ord && !rep) {
		auto start = chrono::high_resolution_clock::now();
		ios_base::sync_with_stdio(false);

		pos = ordANDnoRep(oChoisir, oDispo);
		cout << "On a trouve : " << pos - 1 << " possibilite" << endl;

		auto end = chrono::high_resolution_clock::now();
		double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
		time_taken *= 1e-9;
		cout << "Time taken by function is : ";
		cout << fixed << time_taken << setprecision(9);
		cout << " sec" << endl;
	}
	else if (!ord && rep) {
		auto start = chrono::high_resolution_clock::now();
		ios_base::sync_with_stdio(false);

		pos = noOrdANDrep(oChoisir, oDispo);
		cout << "On a trouve : " << pos - 1 << " possibilite" << endl;

		auto end = chrono::high_resolution_clock::now();
		double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
		time_taken *= 1e-9;
		cout << "Time taken by function is : ";
		cout << fixed << time_taken << setprecision(9);
		cout << " sec" << endl;
	}
	else if (!ord && !rep) {
		auto start = chrono::high_resolution_clock::now();
		ios_base::sync_with_stdio(false);

		pos = noOrdANDnoRep(oChoisir, oDispo);		
		cout << "On a trouve : " << pos - 1 << " possibilite" << endl;
		
		auto end = chrono::high_resolution_clock::now();
		double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
		time_taken *= 1e-9;
		cout << "Time taken by function is : ";
		cout << fixed << time_taken << setprecision(9);
		cout << " sec" << endl;
	}
	else {
		cout << "Enter non valid" << endl;
	}

	system("PAUSE");

	return 0;
}
