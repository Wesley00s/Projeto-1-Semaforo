#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
//UMA DAS BIBLIOTECAS QUE CONTROLAM O TIME EM C (OBS: SÓ FUNCIONA EM SITEMAS BASEADOS EM UNIX, COMO Linux E macOS)
#include <unistd.h> 

unsigned int sleep(unsigned int seg);

// FUNÇÃO PRINCIPAL
int main()
{
    setlocale(LC_ALL, "Portuguese");

    char l1[] = {'x', 'O'}; //VERMELHO
    char l2[] = {'x', 'O'}; //AMARELO
    char l3[] = {'x', 'O'}; //VERDE
    char l4[] = {'x', 'O'}; // VERMELHO
    char l5[] = {'x', 'O'}; // AMARELO
    char l6[] = {'x', 'O'}; // VERDE
    char l7[] = {'x', 'O'}; // VERMELHO
    char l8[] = {'x', 'O'}; // VERDE

    int charCount = 2;
    int index = 0;

    //DURAÇÃO DE CADA FASE: RUA ALFA
    int f1A = 15; // VERDE
    int f2A = 2; // AMARELO
    int f3A = 1; // VERELHO
    int f4A = 10; // VERMELHO
    int f5A = 2; // VERMELHO
    int f6A = 1; // VERRELHO

    // DURAÇÃO DE CADA FASE: RUA BRAVO
    int f1B = 15; // VERMELHO
    int f2B = 2; // VERMELHO
    int f3B = 1; // VERMELHO
    int f4B = 10; // VERDE
    int f5B = 2; // AMARELO
    int f6B = 1; // VERMELHO

    // DURAÇÃO DE CADA FASE: PEDESTRES
    int f1P = 15; // VERMELHO
    int f2P = 2; // VERMELHO
    int f3P = 1; // VERMELHO
    int f4P = 10; // VERMELHO
    int f5P = 2; // VERMELHO
    int f6P = 1; // VERMELHO

    while (1) //LOOP APARA A ANIMAÇÃO DOS SEMAFOROS
    {


        // MAPA
        printf("\n\t\t\t=\t\t=");
        printf("\n\t\t\t=\t\t=");
        printf("\n\t\t\t=\t\t=");
        printf("\n\t\t\t=\t\t=");
        printf("\n\tB\t\t=\t\t=");
        printf("\n\t=================\t\t=================\n\n");
        printf("\n\t---->\t\033[32m%c\033[0m  \033[33m%c\033[0m  \033[31m%c\033[0m\t\n\n", l4[index], l5[index], l6[index]);
        printf("\n\t=================\t\t=================");
        printf("\n\t\t\t=\t\033[31m%c\033[0m\t=\t\033[31m%c\033[0m", l1[index], l7[index]);
        printf("\n\t\t\t=\t\033[33m%c\033[0m\t=\t\033[32m%c\033[0m", l2[index], l8[index]);
        printf("\n\t\t\t=\t\033[32m%c\033[0m\t=", l3[index]);
        printf("\n\t\t\t=\t\t=");
        printf("\n\t\t\t=\t\t=");
        printf("\n\t\t\t=\t\t=");
        printf("\n\t\t\t=\t^\t=");
        printf("\n\t\t\t=\t|\t=");
        printf("\n\t\t      A =\t|\t=");
        printf("\n\n\n");

        index = (index + 1) % charCount;

    sleep(2);
    if (l1[0] == 'x')
    {
        sleep(f1A);
        l1[0] = 'O';
    }

        system("clear");
    }

    return 0;
}