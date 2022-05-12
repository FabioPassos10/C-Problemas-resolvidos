#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
setlocale(LC_ALL,"portuguese");
char nome[60];

printf("Digite seu nome: ");
scanf("%s",nome);

printf("seu nome é: %s",nome);




return 0;
}
