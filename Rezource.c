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

viandes beef = {"steack", 15, 3};
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
	int day;

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
	int choixStock;
	int choixChamp;
	int choixChampCereale;

	int choixReload;

	int po;
	int argentStock;
	int ctBle;
	int ctSarrasin;
	int ctOrge;
	int ctSeigle;

	stock = 1;
	stockMax = 5;
	pop = 1;

	po = 50;
	argentStock = 10;

	ctBle = 25;
	ctSarrasin = 20;
	ctOrge = 15;
	ctSeigle = 30;

	day = 1;

	while(stock > 0  ){
		Color(0,15);
		printf("----JOUR %d----\n", day);
		Color(15,0);
		Color(14,0);
		printf("ta capacite max est de %d\n", stockMax);
		printf("ton stock est de: %d\n", stock);
		printf("ta population est de %d\n", pop);
		printf("ton argent est de %d\n", po);
		Color(15,0);
		printf("Tu veux faire quoi?\n[1]Acheter de la nourriture pour ta population\n[2]Ameliore tes stocks\n[3]Ameliore tes champs pour que t'es cereales poussent seul\n");
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
								if (stock > stockMax && po < wine.prix){
									printf("tu ne peux plus rien acheter, t'as plus de place dans les stocks et ");
									//stock = stock - wine.poids;
									printf("tu n'as pas asser d'argent pour prendre cet article\n");
									//po = po + wine.prix;
								}
								else if (stock <= stockMax && po >= wine.prix){
									printf("le vin te prend %d place dans tes stocks\n", wine.poids);
									stock = stock + wine.poids;
									printf("tu as acheter du vin pour %d po\n", wine .prix);
									po = po - wine.prix;
								}
								else if (stock <= stockMax && po < wine.prix){
									printf("tu as de la place pour prendre cet article mais tu n'as pas asser d'argent\n");
								}
								else if (stock > stockMax && po >= wine.prix){
									printf("tu as de l'argent mais tu n'as pas asser de place dans tes stocks\n");
								}		
							break;

							case 2:
								printf("biere\n");
								if(stock > stockMax && po < beer.prix){
									printf("tu ne peux plus rien acheter, t'as plus de place dans les stocks et ");
									//stock = stock - wine.poids;
									printf("tu n'as pas asser d'argent pour prendre cet article\n");
									//po = po + wine.prix;
								}
								else if (stock <= stockMax && po >= beer.prix){
									printf("la biere te prend %d place dans tes stocks\n", beer.poids);
									stock = stock + beer.poids;
									printf("tu as acheter du biere pour %d po\n", beer .prix);
									po = po - beer.prix;
								}
								else if (stock <= stockMax && po < beer.prix){
									printf("tu as de la place pour prendre cet article mais tu n'as pas asser d'argent\n");
								}
								else if (stock > stockMax && po >= beer.prix){
									printf("tu as de l'argent mais tu n'as pas asser de place dans tes stocks\n");
								}
							break;

							case 3:
								printf("eau\n");
								if(stock > stockMax && po < water.prix){
									printf("tu ne peux plus rien acheter, t'as plus de place dans les stocks et ");
									//stock = stock - wine.poids;
									printf("tu n'as pas asser d'argent pour prendre cet article\n");
									//po = po + wine.prix;
								}
								else if (stock <= stockMax && po >= water.prix){
									printf("l'eau te prend %d place dans tes stocks\n", water.poids);
									stock = stock + water.poids;
									printf("tu as acheter du eau pour %d po\n", water .prix);
									po = po - water.prix;
								}
								else if (stock <= stockMax && po < water.prix){
									printf("tu as de la place pour prendre cet article mais tu n'as pas asser d'argent\n");
								}
								else if (stock > stockMax && po >= water.prix){
									printf("tu as de l'argent mais tu n'as pas asser de place dans tes stocks\n");
								}
							break;

							case 4:
							printf("eau de vie\n");
								if(stock > stockMax && po < lifeWater.prix){
									printf("tu ne peux plus rien acheter, t'as plus de place dans les stocks et ");
									//stock = stock - wine.poids;
									printf("tu n'as pas asser d'argent pour prendre cet article\n");
									//po = po + wine.prix;
								}
								else if (stock <= stockMax && po >= lifeWater.prix){
									printf("l'eau de vie te prend %d place dans tes stocks\n", lifeWater.poids);
									stock = stock + lifeWater.poids;
									printf("tu as acheter du eau de vie pour %d po\n", lifeWater .prix);
									po = po - lifeWater.prix;
								}
								else if (stock <= stockMax && po < lifeWater.prix){
									printf("tu as de la place pour prendre cet article mais tu n'as pas asser d'argent\n");
								}
								else if (stock > stockMax && po >= lifeWater.prix){
									printf("tu as de l'argent mais tu n'as pas asser de place dans tes stocks\n");
								}
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
								if (stock > stockMax && po < beef.prix){
									printf("tu ne peux plus rien acheter, t'as plus de place dans les stocks et ");
									//stock = stock - wine.poids;
									printf("tu n'as pas asser d'argent pour prendre cet article\n");
									//po = po + wine.prix;
								}
								else if (stock <= stockMax && po >= beef.prix){
									printf("le steack te prend %d place dans tes stocks\n", beef.poids);
									stock = stock + beef.poids;
									printf("tu as acheter du steack pour %d po\n", beef .prix);
									po = po - beef.prix;
								}
								else if (stock <= stockMax && po < beef.prix){
									printf("tu as de la place pour prendre cet article mais tu n'as pas asser d'argent\n");
								}
								else if (stock > stockMax && po >= beef.prix){
									printf("tu as de l'argent mais tu n'as pas asser de place dans tes stocks\n");
								}		
							break;

							case 2:
								printf("dinde\n");
								if(stock > stockMax && po < turkey.prix){
									printf("tu ne peux plus rien acheter, t'as plus de place dans les stocks et ");
									//stock = stock - wine.poids;
									printf("tu n'as pas asser d'argent pour prendre cet article\n");
									//po = po + wine.prix;
								}
								else if (stock <= stockMax && po >= turkey.prix){
									printf("la dinde te prend %d place dans tes stocks\n", turkey.poids);
									stock = stock + turkey.poids;
									printf("tu as acheter de la dinde pour %d po\n", turkey .prix);
									po = po - turkey.prix;
								}
								else if (stock <= stockMax && po < turkey.prix){
									printf("tu as de la place pour prendre cet article mais tu n'as pas asser d'argent\n");
								}
								else if (stock > stockMax && po >= turkey.prix){
									printf("tu as de l'argent mais tu n'as pas asser de place dans tes stocks\n");
								}
							break;

							case 3:
								printf("lapin\n");
								if(stock > stockMax && po < rabbit.prix){
									printf("tu ne peux plus rien acheter, t'as plus de place dans les stocks et ");
									//stock = stock - wine.poids;
									printf("tu n'as pas asser d'argent pour prendre cet article\n");
									//po = po + wine.prix;
								}
								else if (stock <= stockMax && po >= rabbit.prix){
									printf("le lapin te prend %d place dans tes stocks\n", rabbit.poids);
									stock = stock + rabbit.poids;
									printf("tu as acheter du lapin pour %d po\n", rabbit .prix);
									po = po - rabbit.prix;
								}
								else if (stock <= stockMax && po < rabbit.prix){
									printf("tu as de la place pour prendre cet article mais tu n'as pas asser d'argent\n");
								}
								else if (stock > stockMax && po >= rabbit.prix){
									printf("tu as de l'argent mais tu n'as pas asser de place dans tes stocks\n");
								}
							break;

							case 4:
								printf("biche\n");
								if(stock > stockMax && po < lifeWater.prix){
									printf("tu ne peux plus rien acheter, t'as plus de place dans les stocks et ");
									//stock = stock - wine.poids;
									printf("tu n'as pas asser d'argent pour prendre cet article\n");
									//po = po + wine.prix;
								}
								else if (stock <= stockMax && po >= lifeWater.prix){
									printf("la biche te prend %d place dans tes stocks\n", lifeWater.poids);
									stock = stock + lifeWater.poids;
									printf("tu as acheter de la biche pour %d po\n", lifeWater .prix);
									po = po - lifeWater.prix;
								}
								else if (stock <= stockMax && po < lifeWater.prix){
									printf("tu as de la place pour prendre cet article mais tu n'as pas asser d'argent\n");
								}
								else if (stock > stockMax && po >= lifeWater.prix){
									printf("tu as de l'argent mais tu n'as pas asser de place dans tes stocks\n");
								}
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
								if (stock > stockMax && po < salmon.prix){
									printf("tu ne peux plus rien acheter, t'as plus de place dans les stocks et ");
									//stock = stock - wine.poids;
									printf("tu n'as pas asser d'argent pour prendre cet article\n");
									//po = po + wine.prix;
								}
								else if (stock <= stockMax && po >= salmon.prix){
									printf("le saumon te prend %d place dans tes stocks\n", salmon.poids);
									stock = stock + salmon.poids;
									printf("tu as acheter du saumon pour %d po\n", salmon .prix);
									po = po - salmon.prix;
								}
								else if (stock <= stockMax && po < salmon.prix){
									printf("tu as de la place pour prendre cet article mais tu n'as pas asser d'argent\n");
								}
								else if (stock > stockMax && po >= salmon.prix){
									printf("tu as de l'argent mais tu n'as pas asser de place dans tes stocks\n");
								}		
							break;

							case 2:
								printf("truite\n");
								if(stock > stockMax && po < trout.prix){
									printf("tu ne peux plus rien acheter, t'as plus de place dans les stocks et ");
									//stock = stock - wine.poids;
									printf("tu n'as pas asser d'argent pour prendre cet article\n");
									//po = po + wine.prix;
								}
								else if (stock <= stockMax && po >= trout.prix){
									printf("la truite te prend %d place dans tes stocks\n", trout.poids);
									stock = stock + trout.poids;
									printf("tu as acheter de la truite pour %d po\n", trout .prix);
									po = po - trout.prix;
								}
								else if (stock <= stockMax && po < trout.prix){
									printf("tu as de la place pour prendre cet article mais tu n'as pas asser d'argent\n");
								}
								else if (stock > stockMax && po >= trout.prix){
									printf("tu as de l'argent mais tu n'as pas asser de place dans tes stocks\n");
								}
							break;

							case 3:
								printf("dorade\n");
								if(stock > stockMax && po < seaBream.prix){
									printf("tu ne peux plus rien acheter, t'as plus de place dans les stocks et ");
									//stock = stock - wine.poids;
									printf("tu n'as pas asser d'argent pour prendre cet article\n");
									//po = po + wine.prix;
								}
								else if (stock <= stockMax && po >= seaBream.prix){
									printf("la dorade te prend %d place dans tes stocks\n", seaBream.poids);
									stock = stock + seaBream.poids;
									printf("tu as acheter de la dorade pour %d po\n", seaBream .prix);
									po = po - seaBream.prix;
								}
								else if (stock <= stockMax && po < seaBream.prix){
									printf("tu as de la place pour prendre cet article mais tu n'as pas asser d'argent\n");
								}
								else if (stock > stockMax && po >= seaBream.prix){
									printf("tu as de l'argent mais tu n'as pas asser de place dans tes stocks\n");
								}
							break;

							case 4:
								printf("sole\n");
								if(stock > stockMax && po < soll.prix){
									printf("tu ne peux plus rien acheter, t'as plus de place dans les stocks et ");
									//stock = stock - wine.poids;
									printf("tu n'as pas asser d'argent pour prendre cet article\n");
									//po = po + wine.prix;
								}
								else if (stock <= stockMax && po >= soll.prix){
									printf("la sole te prend %d place dans tes stocks\n", soll.poids);
									stock = stock + soll.poids;
									printf("tu as acheter de la sole pour %d po\n", soll .prix);
									po = po - soll.prix;
								}
								else if (stock <= stockMax && po < soll.prix){
									printf("tu as de la place pour prendre cet article mais tu n'as pas asser d'argent\n");
								}
								else if (stock > stockMax && po >= soll.prix){
									printf("tu as de l'argent mais tu n'as pas asser de place dans tes stocks\n");
								}
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
								if (stock > stockMax && po < wheat.prix){
									printf("tu ne peux plus rien acheter, t'as plus de place dans les stocks et ");
									//stock = stock - wine.poids;
									printf("tu n'as pas asser d'argent pour prendre cet article\n");
									//po = po + wine.prix;
								}
								else if (stock <= stockMax && po >= wheat.prix){
									printf("le ble te prend %d place dans tes stocks\n", wheat.poids);
									stock = stock + wheat.poids;
									printf("tu as acheter du ble pour %d po\n", wheat .prix);
									po = po - wheat.prix;
								}
								else if (stock <= stockMax && po < wheat.prix){
									printf("tu as de la place pour prendre cet article mais tu n'as pas asser d'argent\n");
								}
								else if (stock > stockMax && po >= wheat.prix){
									printf("tu as de l'argent mais tu n'as pas asser de place dans tes stocks\n");
								}		
							break;

							case 2:
								printf("sarrasin\n");
								if(stock > stockMax && po < buckwheat.prix){
									printf("tu ne peux plus rien acheter, t'as plus de place dans les stocks et ");
									//stock = stock - wine.poids;
									printf("tu n'as pas asser d'argent pour prendre cet article\n");
									//po = po + wine.prix;
								}
								else if (stock <= stockMax && po >= buckwheat.prix){
									printf("le sarrasin te prend %d place dans tes stocks\n", buckwheat.poids);
									stock = stock + buckwheat.poids;
									printf("tu as acheter du sarrasin pour %d po\n", buckwheat .prix);
									po = po - buckwheat.prix;
								}
								else if (stock <= stockMax && po < buckwheat.prix){
									printf("tu as de la place pour prendre cet article mais tu n'as pas asser d'argent\n");
								}
								else if (stock > stockMax && po >= buckwheat.prix){
									printf("tu as de l'argent mais tu n'as pas asser de place dans tes stocks\n");
								}
							break;

							case 3:
								printf("orge\n");
								if(stock > stockMax && po < barley.prix){
									printf("tu ne peux plus rien acheter, t'as plus de place dans les stocks et ");
									//stock = stock - wine.poids;
									printf("tu n'as pas asser d'argent pour prendre cet article\n");
									//po = po + wine.prix;
								}
								else if (stock <= stockMax && po >= barley.prix){
									printf("l'orge te prend %d place dans tes stocks\n", barley.poids);
									stock = stock + barley.poids;
									printf("tu as acheter de l'orge pour %d po\n", barley .prix);
									po = po - barley.prix;
								}
								else if (stock <= stockMax && po < barley.prix){
									printf("tu as de la place pour prendre cet article mais tu n'as pas asser d'argent\n");
								}
								else if (stock > stockMax && po >= barley.prix){
									printf("tu as de l'argent mais tu n'as pas asser de place dans tes stocks\n");
								}
							break;

							case 4:
								printf("seigle\n");
								if(stock > stockMax && po < rye.prix){
									printf("tu ne peux plus rien acheter, t'as plus de place dans les stocks et ");
									//stock = stock - wine.poids;
									printf("tu n'as pas asser d'argent pour prendre cet article\n");
									//po = po + wine.prix;
								}
								else if (stock <= stockMax && po >= rye.prix){
									printf("le seigle te prend %d place dans tes stocks\n", rye.poids);
									stock = stock + rye.poids;
									printf("tu as acheter du seigle pour %d po\n", rye .prix);
									po = po - rye.prix;
								}
								else if (stock <= stockMax && po < rye.prix){
									printf("tu as de la place pour prendre cet article mais tu n'as pas asser d'argent\n");
								}
								else if (stock > stockMax && po >= rye.prix){
									printf("tu as de l'argent mais tu n'as pas asser de place dans tes stocks\n");
								}
							break;
						}
					break;
				}	
			break;
			case 2: // amelioration des stocks
				printf("Pour %d po, tu peux ameliore tes stocks. Ils pourront contenir plus de nourritures\n Es-tu sur de cet achat? [1]oui|[2]non\n", argentStock);
				scanf("%d", &choixStock);
				switch(choixStock){
					case 1:
						if(po < argentStock){
							printf("tu na pas asser d'argent pour achetrer l'amelioration de stock\n");
						}else if(po >= argentStock){
							printf("tu viens d'acheter l'amelioration de stocks. Sa capacite a augmante de 5\n");
							po = po - argentStock;
							stockMax = stockMax + 5;
						}
					break;
				}

				
			break;
			case 3: // amelioration des champs
				printf("es-tu sur de faire cette amelioration? [1]oui|[2]non\n");
				scanf("%d", &choixChamp);
				switch(choixChamp){
					case 1:
						printf("quelle cereale veut tu ameliore?\n[1]ble [2]sarrasin [3]orge [4]seigle\n");
						scanf("%d", &choixChampCereale);
						switch(choixChampCereale){
							case 1: //amelioration du ble
								if(po >= ctBle){
									stock = stock + wheat.poids ;
									printf("ton ble pousse tout seul\n");
								}
								else if(po < ctBle){
									printf("t'as pas asser d'argent\n");
								}
							break;
							case 2: //amelioration du sarrasin
							break;
							case 3: //amelioration de l'orge
							break;
							case 4: //amelioration du seigle
							break;
						}
					break;
				}
			break;
		}
		
		
		day = day + 1;
		pop = pop * 2;

		wine.prix = wine.prix + 15;
		beer.prix = beer.prix + 15;
		water.prix = water.prix + 15;
		lifeWater.prix = lifeWater.prix + 15;
		beef.prix = beef.prix + 15;
		turkey.prix = turkey.prix + 15;
		rabbit.prix = rabbit.prix + 15;
		dear.prix = dear.prix + 15;
		salmon.prix = salmon.prix + 15;
		trout.prix = trout.prix + 15;
		seaBream.prix = seaBream.prix + 15;
		soll.prix = soll.prix + 15;
		wheat.prix = wheat.prix + 15;
		buckwheat.prix = buckwheat.prix + 15;
		barley.prix = barley.prix + 15;
		rye.prix  = rye.prix + 15;

		po = po + pop + 10;
		stock =  stock / 2;

		if (stock <= 0){
		printf("tu  as perdu\nTu veux recommence?\n[1]oui|[2]non\n");
		scanf("%d", &choixReload);
		switch(choixReload){
			case 1:
				stock = 1;
				stockMax = 5;
				pop = 1;
				po = 50;
				argentStock = 10;
				ctBle = 25;
				ctSarrasin = 20;
				ctOrge = 15;
				ctSeigle = 30;
				day = 1;

				wine.prix = 15;
				beer.prix = 10;
				water.prix = 5;
				lifeWater.prix = 20;
				
				beef.prix = 15;
				turkey.prix = 10;
				rabbit.prix = 5;
				dear.prix = 20;
				
				salmon.prix = 15;
				trout.prix = 10;
				seaBream.prix = 5; 
				soll.prix = 20;
				
				wheat.prix = 15;
				buckwheat.prix = 10;
				barley.prix = 5;
				rye.prix = 20;
			break;
		}

		}
	}

}