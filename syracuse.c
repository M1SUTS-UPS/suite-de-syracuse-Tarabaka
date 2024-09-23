//MUSSOTTE Romain
//VAYSSIE Tara
//CODE:23/09//
///SYRACUSE///
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//MAIN//
int main(){
FILE *Fic;//Ecriture dans un fichier
Fic=fopen("syracuse.txt","w");
int val,tour = 0,max = 0; //déclaration de variables
printf("selctionner une valeur\n");//choix de la valeur
scanf("%d",&val);
while (val !=1)//condition limite
	{

	if (val%2==0) val = val/2;//valeur prise si pair
	else val = 3 * val + 1;//si impair
	fprintf(Fic,"%d\n",val);//sauvegarde de la valeur dans fichier
	tour++;//compteur
	if (max<val) max = val;
	
	}
printf ("le temps de vol est de %d et la valeur maximal atteinte est %d\n", tour, max);
return 0;
}
