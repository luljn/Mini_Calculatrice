#include <iostream>
#include <string>
#include <list>
#include <cmath>
#include "fonctions.hpp"

using namespace std;
extern main(void);

int toutCeQueLeMainDoitFaire(void)
{

	routine();
	interaction(Menu());
	return 0;
}

char Menu(void)
{

	int i(0);
	char choix; // Le choix de l'utilisateur dans le menu.

	printf("\t\t\t\t\t\t\t\t");

	for (i = 0; i <= 40; i++)
	{

		printf("_");
	}

	cout << endl;

	for (i = 0; i <= 30; i++)
	{

		printf("\t\t\t\t\t\t\t\t|                                       |\n");

		switch (i)
		{

		case 3:

			printf("\t\t\t\t\t\t\t\t|  tapez :                              |\n");
			break;

		case 5:

			printf("\t\t\t\t\t\t\t\t|    1:addition       2:soustraction    |\n");
			break;

		case 7:

			printf("\t\t\t\t\t\t\t\t|    3:division       4:multiplication  |\n");
			break;

		case 9:

			printf("\t\t\t\t\t\t\t\t|    5:puissance      6:racine n-ieme   |\n");
			break;

		case 11:

			printf("\t\t\t\t\t\t\t\t|    7:discriminant   8:factorielle     |\n");
			break;

		case 13:

			printf("\t\t\t\t\t\t\t\t|    9:base n         0:modulo          |\n");
			break;

		case 20:

			printf("\t\t\t\t\t\t\t\t|                         S pour sortir |\n");
			break;
			/*
			case 29 :

				//printf("\t\t\t\t\t\t|      Votre choix :                    |\n");
				//cin >> choix;
				break;*/

		case 30:

			printf("\t\t\t\t\t\t\t\t|");
			break;

		default:

			break;
		}
	}

	for (i = 0; i <= 38; i++)
	{

		printf("_");
	}

	printf("|");
	cout << "\n\n\n\t\t\t\t\t\t\t\t\tVotre choix : ";
	cin >> choix;

	return choix;
}

int interaction(char choixUtilisateur)
{

	switch (choixUtilisateur)
	{

	case '1':

		system("cls");
		addition();
		system("pause");
		main();
		break;

	case '2':

		system("cls");
		soustraction();
		system("pause");
		main();
		break;

	case '3':

		system("cls");
		division();
		system("pause");
		main();
		break;

	case '4':

		system("cls");
		multiplication();
		system("pause");
		main();
		break;

	case '5':

		system("cls");
		puissance();
		system("pause");
		main();
		break;

	case '6':

		system("cls");
		racineN();
		system("pause");
		main();
		break;

	case '7':

		system("cls");
		discriminant();
		system("pause");
		main();
		break;

	case '8':

		system("cls");
		factorielle();
		system("pause");
		main();
		break;

	case '9':

		system("cls");
		baseN();
		system("pause");
		main();
		break;

	case '0':

		system("cls");
		modulo();
		system("pause");
		main();
		break;

	case 's':

		system("cls");
		cout << "\n\n\n\t\t\t\t\t\t\tAu Revoir !!!!!!!!!!" << endl
			 << endl;
		break;
		return 0;

	case 'S':

		system("cls");
		cout << "\n\n\n\t\t\t\t\t\t\tAu Revoir !!!!!!!!!!" << endl
			 << endl;
		break;
		return 0;

	default:

		system("cls");
		cout << "\n\n\n\t\t\t\t\t\t\tPas disponible :( !!!!!!!!!!" << endl
			 << endl;
		system("pause");
		main();
		break;
	}
}

void routine(void)
{

	system("title Mini_Calculatrice");
	system("cls");
	system("color 09");
}

double addition(void)
{

	list<double> liste; // Pour contenir tous les nombres que l'utilisateur voudra additioner.
	double nombre(0), somme(0);
	char reponse('o');

	cout << "\n\n\t\t\t\t\t\t\t\t\t*** ADDITION ***\n\n"
		 << endl;

	do
	{

		cout << "\t\t\t\t\t\t\tEntrez un nombre : ";
		cin >> nombre;
		liste.push_back(nombre);
		cout << "\n\n\t\t\t\t\t\t\tVoulez-vous entrer un autre nombre ? oui(o)/non(n) : ";
		cin >> reponse;
	} while (reponse != 'n');

	for (list<double>::iterator it = liste.begin(); it != liste.end(); it++)
	{

		somme = somme + *it;
	}

	cout << "\n\n\t\t\t\t\t\t\tsomme = " << somme << endl
		 << endl
		 << endl;
}

double soustraction(void)
{

	list<double> liste; // Pour contenir tous les nombres que l'utilisateur voudra soustraire.
	double nombre(0), diff(0);
	char reponse('o');

	cout << "\n\n\t\t\t\t\t\t\t\t\t*** SOUSTRACTION ***\n\n"
		 << endl;

	do
	{

		cout << "\t\t\t\t\t\t\tEntrez un nombre : ";
		cin >> nombre;
		liste.push_back(nombre);
		cout << "\n\n\t\t\t\t\t\t\tVoulez-vous entrer un autre nombre ? oui(o)/non(n) : ";
		cin >> reponse;
	} while (reponse != 'n');

	for (list<double>::iterator it = liste.begin(); it != liste.end(); it++)
	{

		if (it == liste.begin())
		{

			diff = diff + *it;
		}

		else
		{

			diff = diff - *it;
		}
	}

	cout << "\n\n\t\t\t\t\t\t\tdifference = " << diff << endl
		 << endl
		 << endl;
}

double division(void)
{

	double nombre1(0), nombre2(0), quotient(0); // Respectivement dividende, diviseur et quotient.

	cout << "\n\n\t\t\t\t\t\t\t\t\t*** DIVISION ***\n\n"
		 << endl;
	cout << "\t\t\t\t\t\t\tEntrez le dividende : ";
	cin >> nombre1;
	cout << "\n\n\t\t\t\t\t\t\tEntrez le diviseur : ";
	cin >> nombre2;

	quotient = nombre1 / nombre2;

	cout << "\n\n\t\t\t\t\t\t\tquotient = " << quotient << endl
		 << endl
		 << endl;
}

double multiplication(void)
{

	list<double> liste; // Pour contenir tous les nombres que l'utilisateur voudra multiplier.
	double nombre(0), produit(0);
	char reponse('o');

	cout << "\n\n\t\t\t\t\t\t\t\t\t*** MULTIPLICATION ***\n\n"
		 << endl;

	do
	{

		cout << "\t\t\t\t\t\t\tEntrez un nombre : ";
		cin >> nombre;
		liste.push_back(nombre);
		cout << "\n\n\t\t\t\t\t\t\tVoulez-vous entrer un autre nombre ? oui(o)/non(n) : ";
		cin >> reponse;
	} while (reponse != 'n');

	for (list<double>::iterator it = liste.begin(); it != liste.end(); it++)
	{

		if (it == liste.begin())
		{

			produit = produit + *it;
		}

		else
		{

			produit = produit * *it;
		}
	}

	cout << "\n\n\t\t\t\t\t\t\tproduit = " << produit << endl
		 << endl
		 << endl;
}

double puissance(void)
{

	double nombre1(0), nombre2(0);

	cout << "\n\n\t\t\t\t\t\t\t\t\t*** PUISSANCE ***\n\n"
		 << endl;
	cout << "\t\t\t\t\t\t\tEntrez un nombre : ";
	cin >> nombre1;
	cout << "\n\n\t\t\t\t\t\t\tEntrez sa puissance : ";
	cin >> nombre2;

	double const puissance = pow(nombre1, nombre2);

	cout << "\n\n\t\t\t\t\t\t\tLa valeur de " << nombre1 << "^" << nombre2 << " est " << puissance << "." << endl
		 << endl
		 << endl;
}

double racineN(void)
{

	double nombre(0), /*le nombre dont on veut la racine n-i�me*/ racine(0);
	unsigned int degre(0); //  le degr� d'ordre de la racine.

	cout << "\n\n\t\t\t\t\t\t\t\t\t*** RACINE N-IEME ***\n\n"
		 << endl;
	cout << "\t\t\t\t\t\t\tEntrez un nombre : ";
	cin >> nombre;
	cout << "\n\n\t\t\t\t\t\t\tEntrez le degre de la racine : ";
	cin >> degre;

	switch (degre)
	{

	case 2:

		racine = sqrt(nombre);
		cout << "\n\n\t\t\t\t\t\t\tracine carree = " << racine << endl
			 << endl
			 << endl;
		break;

	case 3:

		racine = cbrt(nombre);
		cout << "\n\n\t\t\t\t\t\t\tracine cubique = " << racine << endl
			 << endl
			 << endl;
		break;

	default:

		system("cls");
		cout << "\n\n\n\t\t\t\t\t\t\tPas disponible :( !!!!!!!!!!" << endl
			 << endl;
		system("pause");
		system("cls");
		racineN();
		break;
	}
}

double discriminant(void)
{

	double a(0), b(0), c(0), delta(0);

	cout << "\n\n\t\t\t\t\t\t\t\t\t*** DISCRIMINANT ***\n\n"
		 << endl;
	cout << "\t\t\t\t\t\t\tEntrez les valeurs suivant le modele : ax^2 + bx + c" << endl
		 << endl;
	cout << "\t\t\t\t\t\t\tEntrez le nombre a : ";
	cin >> a;
	cout << "\t\t\t\t\t\t\tEntrez le nombre b : ";
	cin >> b;
	cout << "\t\t\t\t\t\t\tEntrez le nombre c : ";
	cin >> c;

	delta = ((b * b) - (4 * a * c));

	cout << "\n\n\t\t\t\t\t\t\tSoit delta(d) le discrinant de cette equation : d = (b^2 - 4ac) .";
	cout << "\n\n\t\t\t\t\t\t\tdonc d = " << delta << endl
		 << endl
		 << endl;
}

int factorielle(void)
{

	int nombre(0);

	cout << "\n\n\t\t\t\t\t\t\t\t\t*** FACTORIELLE ***\n\n"
		 << endl;
	cout << "\t\t\t\t\t\t\tEntrez un nombre : ";
	cin >> nombre;

	for (int i = nombre - 1; i >= 1; i--)
	{

		nombre = nombre * i;
	}

	cout << "\n\n\t\t\t\t\t\t\tfactorielle = " << nombre << endl
		 << endl
		 << endl;
}

int baseN(void)
{

	int base(0), nombre1(0), nombre2(0);
	char operation('a');

	cout << "\n\n\t\t\t\t\t\t\t\t\t*** BASE N ***\n\n"
		 << endl;
	cout << "\t\t\t\t\t\t\tEntrez le num�ro de la base que vous voulez utiliser(2, 8, 10 ou 16) : ";
	cin >> base;
	cout << "\n\n\t\t\t\t\t\t\tQuelle operation voulez-vous faire ? : addition (a) / soustraction (s) : ";
	cin >> operation;
	cout << "\n\n\t\t\t\t\t\t\tEntrez le 1er nombre  : ";
	cin >> nombre1;
	cout << "\t\t\t\t\t\t\tEntrez le 2eme nombre : ";
	cin >> nombre2;

	switch (base)
	{

	case 2:

		break;

	case 8:

		break;

	case 10:

		break;

	case 16:

		break;

	default:

		break;
	}
}

int modulo(void)
{

	int nombre1(0), nombre2(0), modulo(0);

	cout << "\n\n\t\t\t\t\t\t\t\t\t*** MODULO ***\n\n"
		 << endl;
	cout << "\t\t\t\t\t\t\tEntrez le dividende : ";
	cin >> nombre1;
	cout << "\n\n\t\t\t\t\t\t\tEntrez le diviseur : ";
	cin >> nombre2;

	modulo = nombre1 % nombre2;

	cout << "\n\n\t\t\t\t\t\t\tmodulo = " << modulo << endl
		 << endl
		 << endl;
}
