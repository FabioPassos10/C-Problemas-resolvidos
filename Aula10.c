#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define PORTUGUES " \n \n Ol� "
#define INGLES "\n \n Hello "
#define ESPANHOL " \n \n Hola "


int opcao;


int main(int argc, char *argv[]){
    char nome[60];
setlocale(LC_ALL,"portuguese");

printf("---------- Menu Op��es ----------\n");
printf("Digite 1 para sauda��o em Portugu�s\n");
printf("Digite 2 para sauda��o em Ingl�s \n");
printf("Digite 3 para sauda��o em Espanhol \n");
printf("Linguagem escolhida: ");
scanf("%d",&opcao);


switch(opcao){
case 1:
    printf("\n Digite seu nome: ");
    scanf("%s",nome);
    system("pause");
    printf(PORTUGUES"%s, como vai ?\n ",nome);
break;
case 2:
    printf("\n Write your name: ");
    scanf("%s",nome);
    system("pause");
    printf(INGLES"%s, How are you?\n",nome);
break;
case 3:
    printf(" \n Escriba su nombre: ");
    scanf("%s",nome);
    system("pause");
    printf(ESPANHOL"%s, �C�mo estas?\n",nome);

break;




}



return 0;
}
