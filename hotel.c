//Biblioteca para interface
#include <stdio.h>

// Definir o que é um quarto
typedef struct
{
    char status;
    char categoria;
} quarto;

typedef struct 
{
    char nome[30];
    char cpf[14];
    int quantidade_pessoas;
    int n_quarto;
    int dias;
}hospede;


const int N_QUARTOS = 15;

int main()
{
    //Criar o hotel e os quartos
    struct quarto hotel[N_QUARTOS];
    int i;
    for (int i = 0; i < N_QUARTOS; i++)
    {
        //Definir que estão livres
        hotel[i].status = 'L';

        //Definir qual é de solteiro e qual é de casal
        if (i<5)
        {
            hotel[i].categoria = 'S';
        }
        else
        {
            hotel[i].categoria = 'F';
        }
    }

    // Loop de infinito de execução da interface
    int sair_do_loop = 0;
    while (!sair_do_loop)
    {
        int user_option;
        const int CHECKIN = 1, CHECKOUT = 2, SAIR = 3;

        //Receber cliente e perguntar se quer fazer check-in ou check-out
        printf("\nOlá, hóspede!\nSeja bem-vindo ao Hotel Belatrix\n \
                Você gostaria de efetuar:\n[1] Check-in\n[2] Check-out\n[3] Sair\n");
        scanf("%i", &user_option);

        //Verificar as opções
        if (user_option == CHECKIN)
        {
            printf("Check-in\n");
            checkin(hotel);
        }
        else if (user_option == CHECKOUT)
        {
            printf("Check-out");
        }
        else if (user_option == SAIR)
        {
            sair_do_loop = 1;
        }
        else
        {
            printf("Opção inválida!");
        }
    }
    printf("VOLTE SEMPRE");
}

//Check-in
void checkin(hospede *h)
{
    
}

//Pegar as informações

//Fazer cadastro

//Reservo quarto pro hóspede

//check-out

//Pegar as informações novamente

//Dou baixa no hóspede

//Liberar o quarto

