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

struct Nourriture{ //Structure pour des "Armes"
	char nom[50];
	int prix;
	int id;
};

typedef struct Nourriture liquides;
typedef struct Nourriture viandes;
typedef struct Nourriture poissons;
typedef struct Nourriture cereales;

liquides wine = {"vin", 15, 1};
liquides beer = {"biere", 10, 2};
liquides water = {"eau", 5, 3};
liquides lifeWater = {"eau de vie", 20, 4};

viandes  beef = {"steack", 15, 1};
viandes turkey = {"dinde", 10, 2};
viandes rabbit= {"lapin", 5, 3};
viandes dear = {"biche", 20, 4};

poissons salmon = {"saumon", 15, 1};
poissons trout = {"truite", 10, 2};
poissons seaBream= {"dorade", 5, 3};
poissons soll = {"sole", 20, 4};

cereales wheat = {"ble", 15, 1};
cereales buckwheat = {"sarrasin", 10, 2};
cereales barley = {"orge", 5, 3};
cereales rye = {"seigle", 20, 4};


int main(){
	int stockMax;
	int stock;
	int champs;
	int pop;
	int choixJoueur;
	int choixNourriture;
	int choixLiquide;
	int choixViande;
	int choixPoisson;
	int choixCereale;



	while(stock >= 1){
		stock = 10;
		printf("Tu veux faire quoi?\n[1]Acheter de la nourriture pour ta population\n[2]Ameliore tes stocks\n[3]Ameliore tes champs pour produire plus\n");
		scanf("%d", &choixJoueur);
		switch(choixJoueur){
			case 1: // achat des nourritures
			printf("que veut tu prendre?\n[1]liquides\n[2]viandes\n[3]poissons\n[4]cereales\n");
			scanf("%d", &choixNourriture);
				switch(choixNourriture){
					case 1: //liquides
						printf("[1]%s %d\n", wine.nom, wine.prix);
						printf("[2]%s %d\n", beer.nom, beer.prix);
						printf("[3]%s %d\n", water.nom, water.prix);
						printf("[4]%s %d\n", lifeWater.nom, lifeWater.prix);
						printf("Quel liquide veux-tu prendre?\n");
						scanf("%d", &choixLiquide);
						switch(choixLiquide){
							case 1:
							printf("vin\n");
							break;
							case 2:
							printf("biere\n");
							break;
							case 3:
							printf("eau\n");
							break;
							case 4:
							printf("eau de vie\n");
							break;
						}
					break;
					case 2: //viandes
						printf("[1]%s %d\n", beef.nom, beef.prix);
						printf("[2]%s %d\n", turkey.nom, turkey.prix);
						printf("[3]%s %d\n", rabbit.nom, rabbit.prix);
						printf("[4]%s %d\n", dear.nom, dear.prix);
						printf("Quel liquide veux-tu prendre?\n");
						scanf("%d", &choixViande);
						switch(choixViande){
							case 1:
							printf("steack\n");
							break;
							case 2:
							printf("dinde\n");
							break;
							case 3:
							printf("lapin\n");
							break;
							case 4:
							printf("biche\n");
							break;
						}
					break;
					case 3: //poissons
						printf("[1]%s %d\n", salmon.nom, salmon.prix);
						printf("[2]%s %d\n", trout.nom, trout.prix);
						printf("[3]%s %d\n", seaBream.nom, seaBream.prix);
						printf("[4]%s %d\n", soll.nom, soll.prix);
						printf("Quel liquide veux-tu prendre?\n");
						scanf("%d", &choixPoisson);
						switch(choixPoisson){
							case 1:
							printf("saumon\n");
							break;
							case 2:
							printf("truite\n");
							break;
							case 3:
							printf("dorade\n");
							break;
							case 4:
							printf("sole\n");
							break;
						}
					break;
					case 4: //cereales
						printf("[1]%s %d\n", wheat.nom, wheat.prix);
						printf("[2]%s %d\n", buckwheat.nom, buckwheat.prix);
						printf("[3]%s %d\n", barley.nom, barley.prix);
						printf("[4]%s %d\n", rye.nom, rye.prix);
						printf("Quel liquide veux-tu prendre?\n");
						scanf("%d", &choixCereale);
						switch(choixCereale){
							case 1:
							printf("ble\n");
							break;
							case 2:
							printf("sarrasin\n");
							break;
							case 3:
							printf("orge\n");
							break;
							case 4:
							printf("seigle\n");
							break;
						}
					break;
				}
			break;
			case 2: // amelioration des stocks
			break;
			case 3: // amelioration des champs
			break;
		}


	}

}