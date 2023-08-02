#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//FUNÇÃO PRINCIPAL
int main()
{
    setlocale(LC_ALL, "Portuguese");

    char l1 = 'x'; //VERMELHO
    char l2 = 'x'; //AMARELO
    char l3 = 'O'; //VERDE
    char l4 = 'x'; // VERMELHO
    char l5 = 'x'; // AMARELO
    char l6 = 'x'; // VERDE
    char l7 = 'x'; // VERMELHO
    char l8 = 'x'; // VERDE

    //MAPA
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\tB\t\t=\t\t=");
    printf("\n\t=================\t\t=================\n\n");
    printf("\n\t---->\t\033[32m%c\033[0m  \033[33m%c\033[0m  \033[31m%c\033[0m\t\n\n", l4, l5, l6);
    printf("\n\t=================\t\t=================");
    printf("\n\t\t\t=\t\033[31m%c\033[0m\t=\t\033[31m%c\033[0m", l1, l7);
    printf("\n\t\t\t=\t\033[33m%c\033[0m\t=\t\033[32m%c\033[0m", l2, l8);
    printf("\n\t\t\t=\t\033[32m%c\033[0m\t=", l3);
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t\t=");
    printf("\n\t\t\t=\t^\t=");
    printf("\n\t\t\t=\t|\t=");
    printf("\n\t\t      A =\t|\t=");
    printf("\n\n\n");
}