#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include "Participantes.c"
#include "Premios.c"
#include "IntervaloNumeros.c"
#include "NumerosPorParticipante.c"
#include "RegistrarCartela.c"
#include <ctype.h>

void main()
{

    int opcao;

    do
    {

        printf("\n Seja Bem Vindo Ao BingoSena!");
        printf("\n ---------------Menu--------------");
        printf("\n 1 - Cadastrar participante");
        printf("\n 2 - Cadastrar Premios");
        printf("\n 3 - Quantidade de numeros por participante e o intervalo do sorteio");
        printf("\n 4 - Registrar cartela");
        printf("\n 5 - Iniciar o Bingo!");
        printf("\n ---------------------------------");
        printf("\n Selecione a opcao desejada: ");
        scanf("%d", &opcao);

        while (opcao < 1 || opcao > 6)
        {
            printf("\n Opcao digitada invalida tente novamente!");
            printf("\n Selecione a opcao desejada: ");
            scanf("%d", &opcao);
        }

        if (opcao == 1)
        {
            system("cls");
            Participante();
        }

        else if (opcao == 2)
        {
            system("cls");
            Premios();
        }

        else if (opcao == 3)
        {
            system("cls");
            IntervaloNumeros();
        }

        else if (opcao == 4)
        {
            system("cls");
            RegistrarCartela();
        }

    } while (opcao != 5);
}