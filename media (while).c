#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main (void){
    char nome[30];
    float n1, n2, n3, n4, media;
    int i = 1;

    while ( i <= 5 ) {

        printf("Insira o Nome do Aluno\n");
        gets(nome);
        printf("Insira a nota\n");
        scanf(" %f", &n1);
        fflush(stdin);
        printf("Insira a nota\n");
        scanf(" %f", &n2);
        fflush(stdin);
        printf("Insira a nota\n");
        scanf(" %f", &n3);
        fflush(stdin);
        printf("Insira a nota\n");
        scanf(" %f", &n4);
        fflush(stdin);
        media = (n1 + n2 + n3 + n4)/4;

        printf("Nome do Aluno : %s\n", nome);
        printf("Media do Aluno : %.2f\n", media);
        ++i;
    }
    

    return 0;
}