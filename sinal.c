#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <unistd.h> // BIBLIOTECA PARA MANIPULAR O TEMPO.

// DEFININDO CORES.
#define VERMELHO "\x1B[31m"
#define AMARELO "\x1B[33m"
#define VERDE "\x1B[32m"
#define PRETO "\x1B[30m"
#define RESET "\x1B[0m"

// FUNÇÃO SLEEP, CAUSA UMA PAUSA NO SISTEMA POR UM DETERMINADO PERIODO DE TEMPO.
unsigned int sleep(unsigned int seg);

// FUNÇÃO PRINCIPAL
int main()
{
    setlocale(LC_ALL, "Portuguese");

    while (1) // LOOP PARA ANIMAÇÃO DOS SEMÁFOROS
    {
        int SW1 = 1; // CRIANDO BOTÃO DO PEDESTRE

        if(1){ // LOOP SEMPRE VERDADEIRO PARA CONTROLAR A LIMPEZA DO TERMINAL
            printf("FASE 1\n");
            printf("O pedestre apertou o botão?\n1 - Não\n2 - Sim\n"); // DANDO A OPÇÃO DE APERTAAR O BOTÃO PARA O PEDESTRE
            scanf("%d", &SW1);
            system("clear"); //LIMPA O CONSOLE
        }
        printf("FASE 1\n");
        printf("Rua Alfa\tRua Bravo\tPedestre\n");

        printf("%sVERDE%s\t\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", VERDE, RESET, VERMELHO, RESET, VERMELHO, RESET);

        sleep(5); //PAUSA DE 5 SEGUNDOS NO SISTEMA 
        system("clear");

        if (SW1 == 1) // VERIFICANDO SE O PEDESTRE APERTOU O BOTÃO, CASO NÃO, VERIFICA NOVAMENTE NA PRÓXIMA INTERAÇÃO
        {
            printf("FASE 2\n");
            printf("O pedestre apertou o botão?\n1 - Não\n2 - Sim\n");
            scanf("%d", &SW1);
            system("clear");
        }
        
        printf("FASE 2\n");
        printf("Rua Alfa\tRua Bravo\tPedestre\n");

        printf("%sAMARELO%s\t\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", AMARELO, RESET, VERMELHO, RESET, VERMELHO, RESET);

        sleep(2);
        system("clear");

        if(SW1 == 1)
        {
            printf("FASE 3\n");
            printf("O pedestre apertou o botão?\n1 - Não\n2 - Sim\n");
            scanf("%d", &SW1);
            system("clear");
        }

        if(SW1 == 1){ // CASO O PEDESTRE NÃO TENHA APERTADO O BOTÃO NAS FASES ACIMA

            printf("FASE 3\n");
            printf("Rua Alfa\tRua Bravo\tPedestre\n");

            printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, VERMELHO, RESET);

            sleep(1);
            system("clear");
            
        }else{ // CASO O PEDESTRE TENHA APERADO O BOTÃO EM ALGUMA FASE ANTERIOR

            printf("FASE 3\n");
            printf("Rua Alfa\tRua Bravo\tPedestre\n");

            printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, VERMELHO, RESET);

            sleep(1);
            system("clear");

            printf("FASE 3A\n");
            printf("Rua Alfa\tRua Bravo\tPedestre\n");

            printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERDE%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, VERDE, RESET);

            sleep(5);
            system("clear");

            for (float i = 0; i < 2.5; i++){ // ANIMAÇÃO DO SINAL VERMELHO PISCANDO
                printf("FASE 3B\n");
                printf("Rua Alfa\tRua Bravo\tPedestre\n");

                printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, VERMELHO, RESET);
                sleep(1);
                system("clear");

                printf("FASE 3B\n");
                printf("Rua Alfa\tRua Bravo\tPedestre\n");

                printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, PRETO, RESET);
                sleep(1);
                system("clear");
            }
        }

        if(SW1 == 1){
            printf("FASE 4\n");
            printf("O pedestre apertou o botão?\n1 - Não\n2 - Sim\n");
            scanf("%d", &SW1);
            system("clear");
        }

        printf("FASE 4\n");
        printf("Rua Alfa\tRua Bravo\tPedestre\n");

        printf("%sVERMELHO%s\t%sVERDE%s\t\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, VERDE, RESET, VERMELHO, RESET);

        sleep(10);
        system("clear");

        if (SW1 == 1)
        {
            printf("FASE 5\n");
            printf("O pedestre apertou o botão?\n1 - Não\n2 - Sim\n");
            scanf("%d", &SW1);
            system("clear");
        }

        printf("FASE 5\n");

        printf("Rua Alfa\tRua Bravo\tPedestre\n");

        printf("%sVERMELHO%s\t%sAMARELO%s\t\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, AMARELO, RESET, VERMELHO, RESET);

        sleep(2);
        system("clear");
        SW1 = 1;
        if (SW1 == 1)
        {
            printf("FASE 6\n");
            printf("O pedestre apertou o botão?\n1 - Não\n2 - Sim\n");
            scanf("%d", &SW1);
            system("clear");
        }

        if(SW1 == 1){

            printf("FASE 6\n");
            printf("Rua Alfa\tRua Bravo\tPedestre\n");

            printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, VERMELHO, RESET);

            sleep(1);
            system("clear");
        }else{

            printf("Rua Alfa\tRua Bravo\tPedestre\n");

            printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, VERMELHO, RESET);

            sleep(1);
            system("clear");

            printf("FASE6A\n");
            printf("Rua Alfa\tRua Bravo\tPedestre\n");

            printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERDE%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, VERDE, RESET);

            sleep(5);
            system("clear");

            for (float i = 0; i < 2.5; i++)
            {
                printf("FASE 6B\n");
                printf("Rua Alfa\tRua Bravo\tPedestre\n");

                printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, VERMELHO, RESET);
                sleep(1);
                system("clear");

                printf("FASE 6B\n");
                printf("Rua Alfa\tRua Bravo\tPedestre\n");

                printf("%sVERMELHO%s\t%sVERMELHO%s\t%sVERMELHO%s\n\n\n", VERMELHO, RESET, VERMELHO, RESET, PRETO, RESET);
                sleep(1);
                system("clear");
            }
        }
    }
    return 0;
}
