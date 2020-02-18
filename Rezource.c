#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
/*#include <windows.h>

void Color(int t,int f){
	
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,f*16+t);
	0 : Noir
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
	15 : Blanc

};*/

struct Nourriture{ //Structure pour des "Armes"
	char nom[50];
	int prix;
	int poids;
};

typedef struct Nourriture liquides;
typedef struct Nourriture viandes;
typedef struct Nourriture poissons;
typedef struct Nourriture cereales;

liquides wine = {"vin", 15, 3};
liquides beer = {"biere", 10, 2};
liquides water = {"eau", 5, 1};
liquides lifeWater = {"eau de vie", 20, 4};

viandes  beef = {"steack", 15, 3};
viandes turkey = {"dinde", 10, 2};
viandes rabbit= {"lapin", 5, 1};
viandes dear = {"biche", 20, 4};

poissons salmon = {"saumon", 15, 3};
poissons trout = {"truite", 10, 2};
poissons seaBream= {"dorade", 5, 1};
poissons soll = {"sole", 20, 4};

cereales wheat = {"ble", 15, 3};
cereales buckwheat = {"sarrasin", 10, 2};
cereales barley = {"orge", 5, 1};
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

	stock = 1;
	stockMax = 5;

	while(stock >= 1 ){

		printf("Tu veux faire quoi?\n[1]Acheter de la nourriture pour ta population\n[2]Ameliore tes stocks\n[3]Ameliore tes champs pour produire plus\n");
		scanf("%d", &choixJoueur);
		switch(choixJoueur){
			case 1: // achat des nourritures
			printf("que veut tu prendre?\n[1]liquides\n[2]viandes\n[3]poissons\n[4]cereales\n");
			scanf("%d", &choixNourriture);
				switch(choixNourriture){
					case 1: //liquides
						printf("[1]%s /%d po/%d dans le stock\n", wine.nom, wine.prix, wine.poids);
						printf("[2]%s /%d po/%d dans le stock\n", beer.nom, beer.prix, beer.poids);
						printf("[3]%s /%d po/%d dans le stock\n", water.nom, water.prix, water.poids);
						printf("[4]%s /%d po/%d dans le stock\n", lifeWater.nom, lifeWater.prix, lifeWater.poids);
						printf("Quel liquide veux-tu prendre?\n");
						scanf("%d", &choixLiquide);
						switch(choixLiquide){
							case 1:
							printf("vin\n");
							stock = stock + 3;
							break;
							case 2:
							printf("biere\n");
							stock = stock + 2;
							break;
							case 3:
							printf("eau\n");
							stock = stock + 1;
							break;
							case 4:
							printf("eau de vie\n");
							stock = stock + 4;
							break;
						}
					break;
					case 2: //viandes
						printf("[1]%s /%d po/%d dans le stock\n", beef.nom, beef.prix, beef.poids);
						printf("[2]%s /%d po/%d dans le stock\n", turkey.nom, turkey.prix, turkey.poids);
						printf("[3]%s /%d po/%d dans le stock\n", rabbit.nom, rabbit.prix, rabbit.poids);
						printf("[4]%s /%d po/%d dans le stock\n", dear.nom, dear.prix, dear.poids);
						printf("Quel liquide veux-tu prendre?\n");
						scanf("%d", &choixViande);
						switch(choixViande){
							case 1:
							printf("steack\n");
							stock = stock + 3;
							break;
							case 2:
							printf("dinde\n");
							stock = stock + 2;
							break;
							case 3:
							printf("lapin\n");
							stock = stock + 1;
							break;
							case 4:
							printf("biche\n");
							stock = stock + 4;
							break;
						}
					break;
					case 3: //poissons
						printf("[1]%s /%d po/%d dans le stock\n", salmon.nom, salmon.prix, salmon.poids);
						printf("[2]%s /%d po/%d dans le stock\n", trout.nom, trout.prix, trout.poids);
						printf("[3]%s /%d po/%d dans le stock\n", seaBream.nom, seaBream.prix, seaBream.poids);
						printf("[4]%s /%d po/%d dans le stock\n", soll.nom, soll.prix, soll.poids);
						printf("Quel liquide veux-tu prendre?\n");
						scanf("%d", &choixPoisson);
						switch(choixPoisson){
							case 1:
							printf("saumon\n");
							stock = stock + 3;
							break;
							case 2:
							printf("truite\n");
							stock = stock + 2;
							break;
							case 3:
							printf("dorade\n");
							stock = stock + 1;
							break;
							case 4:
							printf("sole\n");
							stock = stock + 4;
							break;
						}
					break;
					case 4: //cereales
						printf("[1]%s /%d po/%d dans le stock\n", wheat.nom, wheat.prix, wheat.poids);
						printf("[2]%s /%d po/%d dans le stock\n", buckwheat.nom, buckwheat.prix, buckwheat.poids);
						printf("[3]%s /%d po/%d dans le stock\n", barley.nom, barley.prix, barley.poids);
						printf("[4]%s /%d po/%d dans le stock\n", rye.nom, rye.prix, rye.poids);
						printf("Quel liquide veux-tu prendre?\n");
						scanf("%d", &choixCereale);
						switch(choixCereale){
							case 1:
							printf("ble\n");
							stock = stock + 3;
							break;
							case 2:
							printf("sarrasin\n");
							stock = stock + 2;
							break;
							case 3:
							printf("orge\n");
							stock = stock + 1;
							break;
							case 4:
							printf("seigle\n");
							stock = stock + 4;
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