#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
#include <windows.h>

void Color(int t,int f){
	
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,f*16+t);
	/*0 : Noir
	1 : Bleu foncé
	2 : Vert foncé
	3 : Turquoise
	4 : Rouge foncé
	5 : Violet
	6 : Vert caca d'oie
	7 : Gris clair
	8 : Gris foncé
	9 : Bleu fluo
	10 : Vert fluo
	11 : Turquoise
	12 : Rouge fluo
	13 : Violet 2
	14 : Jaune
	15 : Blanc*/

};




int main(){
	int stockMax;
	int stock;
	int champs;
	int pop;
	int choixJoueur;

	while(stock >= 1){

		scanf("Tu veux faire quoi?\n[1]Acheter de la nourriture pour ta population\n[2]Ameliore tes stocks\n[3]Ameliore tes champs pour produire plus")
		switch(choixJoueur){
			case 1: // achat des nourritures
			break;
			case 2: // amelioration des stocks
			break;
			case 3: // amelioration des champs
			break;
		}


	}

}