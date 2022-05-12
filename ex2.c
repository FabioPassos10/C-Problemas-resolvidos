#include<stdio.h>
#include<conio.h>
int main(void)
{
  char nome[61];

  printf("Digite seu nome: ");
  gets(nome);

  printf("O nome armazenado foi: %s", nome);

  getch();
  return 0;
}
