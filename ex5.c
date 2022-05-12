#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define QTD_PESSOAS 2 // dei um nome melhor para "pessoas"
#define TAM_NOME 45

struct {
    char nome[TAM_NOME];
    int dia, mes, ano;
} data [QTD_PESSOAS];

int main() {
    setlocale(LC_ALL,"portuguese");
    printf("\nInsira os dados pessoais:\n");
    // primeiro lê os nomes e datas de nascimento
    for (int i = 0; i < QTD_PESSOAS; i++) {
        printf("\nNome da pessoa %d: ", i + 1);
        scanf(" %[^\n]c", data[i].nome);
        printf("\nDia de nascimento da pessoa %d: ", i + 1);
        scanf("%d", &data[i].dia);
        printf("\nMês de nascimento da pessoa %d: ", i + 1);
        scanf("%d", &data[i].mes);
        printf("\nAno de nascimento da pessoa %d: ", i + 1);
        scanf("%d", &data[i].ano);
    }

    // calcula as idades de todos
    int diaatual = 2, mesatual = 2, anoatual = 2022;
    int idadeMaisVelha = -1;
    char nomeMaisVelha[TAM_NOME];
    for (int i = 0; i < QTD_PESSOAS; i++) {
        int totalIdade = 365 * anoatual + 30 * mesatual + diaatual - 365 * data[i].ano - 30 * data[i].mes - data[i].dia;
        if (totalIdade > idadeMaisVelha) { // achei alguém mais velho, atualiza a idade e nome do mais velho
            idadeMaisVelha = totalIdade;
            strcpy(nomeMaisVelha, data[i].nome);
        }

        int anos = totalIdade / 365;
        totalIdade = totalIdade % 365;

        int meses = totalIdade / 30;
        totalIdade = totalIdade % 30;

        int dias = totalIdade;
        printf("\n%s tem %d anos, %d meses, e %d dias de idade\n", data[i].nome, anos, meses, dias);
    }
    printf("\n%s é a pessoa mais velha \n", nomeMaisVelha);
    return 0;
}
