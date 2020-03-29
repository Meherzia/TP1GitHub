#include <iostream>
#include <vector>
using namespace std;

int calculPGCD(int num, int denom) {
	//Trouver le minimum de num et denom
	int min, Div, PGCD;
	if (num < denom) {
		min = num;
	}
	else {
		min = denom;
	}
	//boucle pour qui verifie si le reste de la division du numerateur et du 
		//denominateur par le diviseur est null
	for (Div = 1; Div <= min; ++Div)
	{
		if (((num % Div) == 0) && ((denom % Div) == 0)) {
			PGCD = Div;//Donc ce diviseur est le plus grand diviseur en commun entre num et denom:PGCD
		}
	}
	cout << "Le plus grand diviseur en commun entre A et B est :" << PGCD << endl;
	return PGCD;
}

void Simplification(int num, int denum) {
	cout << "saisir le numerateur:" << endl;//demander a l'utilisateur de saisir le numerateur
	cin >> num;//lire le numerateur 
	cout << "saisir le denominateur:" << endl;//demander a l'utilisateur de saisir le denominateur
	cin >> denom;//lire le denominbateur
	PGCD = calculPGCD(num, denom);//apple de la fonction qui calcule le PGCD
	Snum = num / PGCD;//	diviser le nummerateur par le PGCD pour le simplifier
	Sdenum = denom / PGCD;// diviser le denominateur par le PGCD pour le simplifier
	cout << "La simplification de la fraction est :" << Snum << "/" << Sdenum << endl;
	//afficher la fraction simplifiée
}

void print(int f, vector<int> numerateur, vector<int> denominateur) {
	int i, PGCD;
	for (i = 0; i <= f - 1; i++) {

		PGCD = calculPGCD(numerateur[i], denominateur[i]);

		cout << numerateur[i] << '/' << denominateur[i] << " ---> " << numerateur[i] / PGCD << '/' << denominateur[i] / PGCD << endl;
	}
}

void fctQte()
{
	cout << "Saisir la qte de fractions a analyser: ";
	int i, f, num = 0, denom = 0;
	vector<int> numerateur, denominateur;

	cin >> f;
	for (i = 1; i <= f; i++) {
		cout << "Entrer le numerateur " << i << "\n";
		cin >> num;
		if (num > 0) {
			numerateur.push_back(num);
		}
		else {
			cout << "Le numerateur doit etre plus grand que zero! \n";
			cout << "Entrer un autre numerateur: " << "\n";
			cin >> num;
			numerateur.push_back(num);
		}

		cout << "Entrer le denominateur " << i << "\n";
		cin >> denom;
		if (denom > 0) {
			denominateur.push_back(denom);
		}
		else {
			cout << "Le denominateur doit etre plus grand que zero! \n";
			cout << "Entrer un autre denominateur: " << "\n";
			cin >> denom;
			denominateur.push_back(denom);
		}
	}

	print(f, numerateur, denominateur);
}

int main() {

	fctQte();
	//Simplification(num, denom);//appel de la fonction simplification
}
