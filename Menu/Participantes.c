#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>

// Função e struct para coletar os dados do participante
void Participante()
{

    struct DadosParticipante
    {
        char nome[30];
        int numero;
        int DocumetoPessoal;
    };

    struct DadosParticipante Dados;

    int Qtd_participantes;

    printf("\n Digite a quantidade de participantes que serao cadastrados: ");
    scanf("%d", &Qtd_participantes);

    FILE *cadastro_participante;
    char participante[Qtd_participantes];

    printf("\n Cadatrar novo Participante!");

    for (int i = 0; i < Qtd_participantes; i++)
    {

        // Função que cria uma nova string usando uma variavel, usada para o nome do arquivo que vai ser criado
        sprintf(participante, "participante-%d.txt", i);
        cadastro_participante = fopen(participante, "w");

        if (cadastro_participante != NULL)
        {

            printf("\n Digite o nome do Participante: ");
            scanf("%s", &Dados.nome);
            fprintf(cadastro_participante, "%s\n", Dados.nome);

            printf("\n Digite o numero do Participante: ");
            scanf("%d", &Dados.numero);
            fprintf(cadastro_participante, "%d\n", Dados.numero);

            printf("\n Digite o numero do Documento Pessoal do Perticipante: ");
            scanf("%d", &Dados.DocumetoPessoal);
            fprintf(cadastro_participante, "%d\n", Dados.DocumetoPessoal);

            fclose(cadastro_participante);
        }
        else
        {
            printf("ERRO!, O arquivo nao pode ser aberto ou criado!");
        }
    }
}