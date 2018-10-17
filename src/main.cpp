#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

class reel{
	public:
		float nb;
};

int main(){
	int choose1;
	float tmp_nb;

	vector <reel> Reel;

	welcome:

	cout <<"------------MENU----------"<<endl;
	cout << endl;
	cout << "Taper 1 pour ajouter un réel"<<endl;
	cout << "Taper 2 pour afficher la liste des réel"<<endl;
	cout << "Taper 3 pour supprimer un réel" << endl;
	cout << "Taper 4 pour supprimer tout les réels de la valeur donnée"<<endl;
	cout << "Taper 5 pour quitter"<<endl;

	cin >> choose1;

	switch (choose1){
		case 1 :{
			for(int i=0; i<10; i++){
			cout << "Saisir un réel : "<<endl;
			cin >> tmp_nb;
			Reel.push_back(reel());
			Reel[i].nb = tmp_nb;
			goto welcome;
			}
		break;}
		case 2 :{
			cout << "Voici la liste des réels: " << endl;
			for(int i=0; i<Reel.size(); i++){
				cout << Reel[i].nb << endl;
			}
			goto welcome;
		break;}

		case 5 :{
			cout << "Au revoir"<<endl;
			goto stop;
			stop:	;
			system("clear");
		}
	}
}
