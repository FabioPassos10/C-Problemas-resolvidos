#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float n1,n2,n3,media;
char nome[60];

void main(int argc, char *argv[]){

setlocale(LC_ALL,"portuguese");//Fun��o para permitir os acentos
printf("       |--------------------------------------------------|  \n \n");
printf("       |                 Algoritimo M�dia                 |  \n \n");
printf("       |--------------------------------------------------|  \n \n");

system("pause");
system("cls");
printf("       ==========> Cadastrando Notas <========== \n \n");
printf("Digite seu nome: ");
gets(nome);
printf("Digite a primeira nota: ");
scanf("%f", &n1);
printf("Digite a segunda nota: ");
scanf("%f", &n2);
printf("Digite a terceira nota: ");
scanf("%f", &n3);
media = (n1+n2+n3)/3;

printf(" \n                   ����,��,����`����,� Boletim %s ����,��,����`����,�                      \n",nome);
printf("\n   +--------------------------------------------------+\n");
printf("   | Nota prova 1: %.2f                               |\n \n", n1);
printf("   | Nota prova 2: %.2f                               |\n \n", n2);
printf("   | Nota prova 3: %.2f                               |\n \n", n3);
printf("   | Ol� %s,Sua M�dia �: %.2f               |", nome,media);

if(media >6){

   printf("\n \n   | Situa��o: Aprovado(a)! :)                        |");
   printf("\n   +--------------------------------------------------+\n");

}else{


   printf("\n \n   | Situa��o: Reprovado(a)! :(                       |");
   printf("\n   +--------------------------------------------------+\n");

}
getch();
}
