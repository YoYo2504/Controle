/*!\file main.cpp
*\Author Yoan FILIPE
*\Version 1.0
*/

#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

/*!\Class reel
*\ objet : nb
*/
class reel{
	public:
/*!\objet nb
*\type float
*/
		float nb;
};

int main(){
//objet chhose1 défini ce que l'utilisateur rentre
	int choose1;
//tmp_nb --> valeur tampon que l'utilisateur rentre
//recherche --> c'est la valeur que l'utilisateur va rentrer pour détruire après le réel dans la liste
	float tmp_nb, recherche;

	vector <reel> Reel;

	welcome:
//Création du menu
	cout <<"------------MENU----------"<<endl;
	cout << endl;
	cout << "Taper 1 pour ajouter un réel"<<endl;
	cout << "Taper 2 pour afficher la liste des réel"<<endl;
	cout << "Taper 3 pour supprimer un réel" << endl;
	cout << "Taper 4 pour supprimer tout les réels de la valeur donnée"<<endl;
	cout << "Taper 5 pour quitter"<<endl;

	cin >> choose1;

	switch (choose1){
//Permet de saisir un reel et l'enregistré dans le tableau
		case 1 :{
			for(int i=0; i<3; i++){
			cout << "Saisir un réel : "<<endl;
			cin >> tmp_nb;
			Reel.push_back(reel());
			Reel[i].nb = tmp_nb;
			}
			goto welcome;
		break;}
		case 2 :{
//permet d'afficher la liste des réel
			cout << "Voici la liste des réels: " << endl;
			for(int i=0; i<Reel.size(); i++){
				cout << Reel[i].nb << endl;
			}
			goto welcome;
		break;}
		case 3 :{
//permet de supprimé le premier réel de la liste que l'utilisateur a sélectionner
			cout << "Quel réel voulez-vous supprimer ?"<<endl;
			cin >> recherche;
			int i =0;
			while(recherche != Reel[i].nb){
				i++;
			}
			Reel.erase(Reel.begin()+i);
			goto welcome;
		break;}
		case 4 :{
//Permet de supprimer tout les doublons de réel de la liste, que l'utilisateur sélectionne
			cout << "Quel réel voulez-vous supprimer de toute la liste ?" <<endl;
			cin >> recherche;
			int i =0;
			if(i!=3){
				while(recherche != Reel[i].nb){
					i++;
					Reel.erase(Reel.begin()+i);
				}
				i++;
			}
			goto welcome;
		break;}
		case 5 :{
//Permet de quitter et efface l'invite de commande
			cout << "Au revoir"<<endl;
			goto stop;
			stop:	;
			system("clear");
		}
	}
}
