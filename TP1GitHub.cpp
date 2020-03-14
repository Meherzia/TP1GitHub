#include <iostream>
using namespace std;
int Div, min, PGCD=1,num,denom,Snum,Sdenom;
//Diviseur,minimum,PGCD initialisé a 1,numerateur,denominateur,numerateur simplifié,denominateuyr simplifié
int calculPGCD(int num, int denom);// fonction qui calcule le PGCD et retourne un entier:le PGCD
void Simplification(int num, int denom);//fonction qui fait la simplification du numerateur et du denominateur
int main()
{
	
	Simplification(num, denom);//appel de la foction simplification
	
	
}
int calculPGCD(int num, int denom) {
	//Trouver le minimum de num et denom
	if (num < denom) {
		min = nom;
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

