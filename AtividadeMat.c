// F�bio Eloy Passos
// Matematica Discreta
// Semestre ADS-Noite

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
setlocale(LC_ALL,"portuguese");
int R , P, Q;
printf("+******************************************+\n");
printf("|          F�bio Eloy Passos               |\n");
printf("|          Matem�tica Discreta             |\n");
printf("|          1� Semestre Ads-Noite           |\n");
printf("+******************************************+\n \n");
system("pause");
system("cls");

printf(" \n      +---------- Observa��es --------- +\n");
printf(" \n      |     Digite 1 para Verdadeiro    |\n");
printf(" \n      |     Digite 0 para Falso         | \n");
printf(" \n      +-------------------------------- +\n");

printf("\n Digite o valor l�gico de R: ");
scanf("%d", &R);

printf(" Digite o valor l�gico de P: ");
scanf("%d", &P);

printf(" Digite o valor l�gico de Q: ");
scanf("%d", &Q);

printf("\n\n+----------+\n");
printf("| R: %d     |\n", R);
printf("| P: %d     |\n", P);
printf("| Q: %d     |\n", Q);
printf("+----------+\n");



printf("\n O valor l�gico de Nega��o de R (~R) �: %d \n", !R);
printf("\n O valor l�gico de P e Q(P ^ Q) �: %d \n", P && Q);
printf("\n O valor l�gico de P ou Q(P v Q) �: %d \n", P || Q);


return 0;
}




