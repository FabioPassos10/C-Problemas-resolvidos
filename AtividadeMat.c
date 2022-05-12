// Fábio Eloy Passos
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
printf("|          Fábio Eloy Passos               |\n");
printf("|          Matemática Discreta             |\n");
printf("|          1º Semestre Ads-Noite           |\n");
printf("+******************************************+\n \n");
system("pause");
system("cls");

printf(" \n      +---------- Observações --------- +\n");
printf(" \n      |     Digite 1 para Verdadeiro    |\n");
printf(" \n      |     Digite 0 para Falso         | \n");
printf(" \n      +-------------------------------- +\n");

printf("\n Digite o valor lógico de R: ");
scanf("%d", &R);

printf(" Digite o valor lógico de P: ");
scanf("%d", &P);

printf(" Digite o valor lógico de Q: ");
scanf("%d", &Q);

printf("\n\n+----------+\n");
printf("| R: %d     |\n", R);
printf("| P: %d     |\n", P);
printf("| Q: %d     |\n", Q);
printf("+----------+\n");



printf("\n O valor lógico de Negação de R (~R) é: %d \n", !R);
printf("\n O valor lógico de P e Q(P ^ Q) é: %d \n", P && Q);
printf("\n O valor lógico de P ou Q(P v Q) é: %d \n", P || Q);


return 0;
}




