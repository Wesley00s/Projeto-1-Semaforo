#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h> // BIBLIOTECA PARA MANIPULAR O TEMPO

// DEFININDO CORES
#define VERMELHO "\x1B[31m"
#define AMARELO "\x1B[33m"
#define VERDE "\x1B[32m"
#define PRETO "\x1B[30m"
#define RESET "\x1B[0m"

// FUNÇÃO PRINCIPAL
int main()
{
    setlocale(LC_ALL, "Portuguese");

    while (1) // LOOP PARA ANIMAÇÃO DOS SEMÁFOROS
    {
        int SW1 = 1; // CRIANDO BOTÃO DO PEDESTRE

        if(1){ // CONDIÇÃO SEMPRE VERDADEIRA PARA CONTROLAR A LIMPEZA DO TERMINAL
            printf("\tFASE 1\n\n");
            printf("O pedestre apertou o botão?\n1 - Não\n2 - Sim\n"); // DANDO A OPÇÃO DE APERTAR O BOTÃO PARA O PEDESTRE, PARA FASES (3A E 3B)
            scanf("%d", &SW1);
            system("clear"); //LIMPA O CONSOLE
        }
        printf("\tFASE 1 - (15s)\n\n"); //INICIO DA FASE 1
        printf("Rua Alfa\tRua Bravo\tPedestre\n");

        printf("%sVERDE%s\t\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", VERDE, RESET, VERMELHO, RESET, VERMELHO, RESET);

        sleep(15); // FUNÇÃO SLEEP, CAUSA UMA PAUSA NO SISTEMA POR UM DETERMINADO PERIODO DE TEMPO
        system("clear");

        if (SW1 == 1) // VERIFICANDO SE O PEDESTRE APERTOU O BOTÃO, CASO NÃO, VERIFICA NOVAMENTE NA PRÓXIMA INTERAÇÃO
        {
            printf("\tFASE 2\n\n");
            printf("O pedestre apertou o botão?\n1 - Não\n2 - Sim\n"); // DANDO A OPÇÃO DE APERTAR O BOTÃO PARA O PEDESTRE, PARA FASES (3A E 3B)
            scanf("%d", &SW1);
            system("clear");
        }
        
        printf("\tFASE 2 - (2s)\n\n"); // INICIO DA FASE 2
        printf("Rua Alfa\tRua Bravo\tPedestre\n");

        printf("%sAMARELO%s\t\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", AMARELO, RESET, VERMELHO, RESET, VERMELHO, RESET);

        sleep(2);
        system("clear");

        if(SW1 == 1)
        {
            printf("\tFASE 3\n\n");
            printf("O pedestre apertou o botão?\n1 - Não\n2 - Sim\n"); // VERIFICANDO SE O PEDESTRE APERTOU O BOTÃO, CASO NÃO, VERIFICA NOVAMENTE NA PRÓXIMA INTERAÇÃO
            scanf("%d", &SW1);
            system("clear");
        }

        if(SW1 == 1){ // CASO O PEDESTRE NÃO TENHA APERTADO O BOTÃO NAS FASES ACIMA

            printf("\tFASE 3 - (1s)\n\n"); //INICIO DA FASE 3 CASO BOTÃO NÃO APERTADO
            printf("Rua Alfa\tRua Bravo\tPedestre\n");

            printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, VERMELHO, RESET);

            sleep(1);
            system("clear");
            
        }else{ // CASO O PEDESTRE TENHA APERADO O BOTÃO EM ALGUMA FASE ANTERIOR

            printf("\tFASE 3 - (1s)\n\n"); //INICIO DA FASE 3 CASO BOTÃO APERTADO
            printf("Rua Alfa\tRua Bravo\tPedestre\n");

            printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, VERMELHO, RESET);

            sleep(1);
            system("clear");

            printf("\tFASE 3A - (5s)\n\n"); //INICIO DA FASE 3A
            printf("Rua Alfa\tRua Bravo\tPedestre\n");

            printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERDE%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, VERDE, RESET);

            sleep(5);
            system("clear");

            for (float i = 0; i < 2.5; i++){ // ANIMAÇÃO DO SINAL VERMELHO PISCANDO
                printf("\tFASE 3B - (5s)\n\n"); // INICIO DA FASE 3B
                printf("Rua Alfa\tRua Bravo\tPedestre\n");

                printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, VERMELHO, RESET);
                sleep(1);
                system("clear");

                printf("\tFASE 3B - (5s)\n\n");
                printf("Rua Alfa\tRua Bravo\tPedestre\n");

                printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, PRETO, RESET);
                sleep(1);
                system("clear");
            }
        }

        if(1){
            printf("\tFASE 4\n\n");
            printf("O pedestre apertou o botão?\n1 - Não\n2 - Sim\n"); // DANDO A OPÇÃO DE APERTAR O BOTÃO PARA O PEDESTRE, PARA FASES (6A E 6B)
            scanf("%d", &SW1);
            system("clear");
        }

        printf("\tFASE 4 - (10s)\n\n"); //INICIO DA FASE 4
        printf("Rua Alfa\tRua Bravo\tPedestre\n");

        printf("%sVERMELHO%s\t%sVERDE%s\t\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, VERDE, RESET, VERMELHO, RESET);

        sleep(10);
        system("clear");

        if (SW1 == 1)
        {
            printf("\tFASE 5\n\n");
            printf("O pedestre apertou o botão?\n1 - Não\n2 - Sim\n"); // DANDO A OPÇÃO DE APERTAR O BOTÃO PARA O PEDESTRE, PARA FASES (6A E 6B)
            scanf("%d", &SW1);
            system("clear");
        }

        printf("\tFASE 5 - (2s)\n\n"); // INICO DA FASE 5

        printf("Rua Alfa\tRua Bravo\tPedestre\n");

        printf("%sVERMELHO%s\t%sAMARELO%s\t\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, AMARELO, RESET, VERMELHO, RESET);

        sleep(2);
        system("clear");

        if (SW1 == 1)
        {
            printf("\tFASE 6\n\n");
            printf("O pedestre apertou o botão?\n1 - Não\n2 - Sim\n"); // DANDO A OPÇÃO DE APERTAR O BOTÃO PARA O PEDESTRE, PARA FASES (6A E 6B)
            scanf("%d", &SW1);
            system("clear");
        }

        if(SW1 == 1){

            printf("\tFASE 6 - (1s)\n\n"); // INICIO DA FASE 6 CASO BOTÃO NÃO APERTADO
            printf("Rua Alfa\tRua Bravo\tPedestre\n");

            printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, VERMELHO, RESET);

            sleep(1);
            system("clear");
        }else{
            printf("\tFASE 6 - (1s)\n\n"); // INICIO DA FASE 6 CASO BOTÃO APERTADO
            printf("Rua Alfa\tRua Bravo\tPedestre\n");

            printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, VERMELHO, RESET);

            sleep(1);
            system("clear");

            printf("\tFASE 6A - (5s)\n\n"); // INICIO DA FASE 6A
            printf("Rua Alfa\tRua Bravo\tPedestre\n");

            printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERDE%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, VERDE, RESET);

            sleep(5);
            system("clear");

            for (float i = 0; i < 2.5; i++) // ANIMAÇÃO DO SINAL VERMELHO PISCANDO
            {
                printf("\tFASE 6B - (5s)\n\n"); // INICIO DA FASE 6B
                printf("Rua Alfa\tRua Bravo\tPedestre\n");

                printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, VERMELHO, RESET);
                sleep(1);
                system("clear");

                printf("\tFASE 6B - (5s)\n\n");
                printf("Rua Alfa\tRua Bravo\tPedestre\n");

                printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, PRETO, RESET);
                sleep(1);
                system("clear");
            }
        }
    }
    return 0;
}
