#include <iostream>
using namespace std;
int Div, min, PGCD=1,num,denum,Snum,Sdenum;
int calculPGCD(int num, int denum);
void Simplification(int num, int denum);
int main()
{
	
	Simplification(num, denum);
	
	
}
int calculPGCD(int num, int denum) {
	
	if (num < denum) {
		min = num;
	}
	else {
		min = denum;
	}
	for (Div = 1; Div <= min; ++Div)
	{
		if (((num % Div) == 0) && ((denum % Div) == 0)) {
			PGCD = Div;
		}
	}
	cout << "Le plus grand diviseur en commun entre A et B est :" << PGCD << endl;
	return PGCD;
	
}	
void Simplification(int num, int denum) {
		cout << "saisir le premier chiffre:" << endl;
		cin >> num;
		cout << "saisir le deuxieme chiffre:" << endl;
		cin >> denum;
		PGCD = calculPGCD(num, denum);
		Snum = num / PGCD;
		Sdenum = denum / PGCD;
		cout << "La simplification de la fraction est :" << Snum << "/" << Sdenum << endl;
}

