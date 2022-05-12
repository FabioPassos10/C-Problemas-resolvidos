#include <stdio.h>
#include <conio.h>
int main(void)
{
  int i;
  char texto[5] = "Fabio";

  printf("Valor da variavel texto = %s\n", texto);

  for (i=0; i<5; i++)
  {
    printf("Valor do elemento %d da string = %c\n",i, texto[i]);
  }

  getch();
  return 0;
}
