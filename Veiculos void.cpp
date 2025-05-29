#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int id;
    char marca[50];
    char modelo[50];
    char cor[30];
    int ano;
    float valor;
    int tipocombustivel;	
} Carro;

Carro veiculos[MAX];
int total = 0;

void cadastrarVeiculo();
void listarVeiculos();
void filtrarPorCombustivel();
void buscarVeiculo();

int main() {
    int opcao;

    do {
        printf("\033[34m");
        printf("**** Concessionaria ****\n");
        printf("\033[0m");
        printf("\033[35m");
        printf("1 - Cadastrar Veiculo\n");
        printf("2 - Listar Veiculos\n");
        printf("3 - Filtrar por Tipo de Combustivel\n");
        printf("4 - Buscar Veiculo\n");
        printf("0 - Sair\n");
        printf("Selecione uma opcao: ");
        scanf("%d", &opcao);
        printf("\033[0m");

        system("cls");

        switch (opcao) {
            case 1:
                cadastrarVeiculo();
                break;
            case 2:
                listarVeiculos();
                break;
            case 3:
                filtrarPorCombustivel();
                break;
            case 4:
                buscarVeiculo();
                break;
            case 0:
                printf("Obrigado por usar o sistema!\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }

        if (opcao != 0) {
            printf("\033[36m");
            printf("Pressione Enter para continuar...");
            printf("\033[0m");
            getchar(); getchar();
            system("cls");
        }

    } while (opcao != 0);

    return 0;
}

void cadastrarVeiculo() {
    if (total >= MAX) {
        printf("Limite de veiculos atingido!\n");
        return;
    }

    printf("\033[47m\033[34m--- Cadastro de Veiculo ---\n\033[0m\033[35m");

    printf("ID: \n");
    scanf("%d", &veiculos[total].id);

    printf("Marca:\n ");
    scanf("%s", veiculos[total].marca);

    printf("Modelo:\n ");
    scanf("%s", veiculos[total].modelo);

    printf("Cor:\n ");
    scanf("%s", veiculos[total].cor);

    printf("Ano:\n ");
    scanf("%d", &veiculos[total].ano);

    printf("Valor: R$ \n");
    scanf("%f", &veiculos[total].valor);

    printf("Tipo de Combustível:\n");
    printf("1 - Etanol\n");
    printf("2 - Gasolina\n");
    printf("3 - Flex\n");
    printf("4 - Eletrico\n");
    printf("Escolha:\n ");
    scanf("%d", &veiculos[total].tipocombustivel);

    total++;
    printf("\033[0mVeiculo cadastrado com sucesso!\n");
}

void listarVeiculos() {
    printf("\033[47m\033[34m--- Veiculos Cadastrados ---\n\033[0m");

    for (int i = 0; i < total; i++) {
        printf("\033[35m");
        printf("ID: %d\n", veiculos[i].id);
        printf("Marca: %s\n", veiculos[i].marca);
        printf("Modelo: %s\n", veiculos[i].modelo);
        printf("Cor: %s\n", veiculos[i].cor);
        printf("Ano: %d\n", veiculos[i].ano);
        printf("Valor: R$ %.2f\n", veiculos[i].valor);
        printf("Tipo de Combustível:\n ");

        switch (veiculos[i].tipocombustivel) {
            case 1: 
               printf("Etanol\n"); 
               break;
            case 2:
               printf("Gasolina\n"); 
               break;
            case 3:
               printf("Flex\n"); 
               break;
            case 4:
              printf("Eletrico\n"); 
              break;
            default: 
              printf("Desconhecido\n");
        }

        printf("-----------------------------\n");
    }
    printf("\033[0m");
}

void filtrarPorCombustivel() {
    int tipo;
	printf("\033[34m Filtrar por tipo de combustível:\n\033[0m");
    printf("\033[35m");
	printf("1 - Etanol\n");
    printf("2 - Gasolina\n");
    printf("3 - Flex\n");
    printf("4 - Eletrico\n");
    printf("Escolha: ");
    scanf("%d", &tipo);
    printf("\033[0m");

    int encontrados = 0;
    printf("\033[47m\033[34m--- Veiculos com esse tipo de combustivel ---\n\033[0m");

    for (int i = 0; i < total; i++) {
        if (veiculos[i].tipocombustivel == tipo) {
            printf("\033[35m");
            printf("ID: %d | Marca: %s | Modelo: %s | Valor: R$ %.2f\n",
                   veiculos[i].id, veiculos[i].marca, veiculos[i].modelo, veiculos[i].valor);
            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("\033[31mNenhum veículo encontrado para esse tipo de combustível.\033[0m\n");
    }
    printf("\033[0m");
}

void buscarVeiculo() {
    int buscaID;
    printf("Digite o ID do veiculo que deseja buscar: ");
    scanf("%d", &buscaID);

    for (int i = 0; i < total; i++) {
        if (veiculos[i].id == buscaID) {
            printf("\033[47m\033[34m--- Veículo Encontrado ---\n\033[0m\033[35m");
            printf("ID: %d\n", veiculos[i].id);
            printf("Marca: %s\n", veiculos[i].marca);
            printf("Modelo: %s\n", veiculos[i].modelo);
            printf("Cor: %s\n", veiculos[i].cor);
            printf("Ano: %d\n", veiculos[i].ano);
            printf("Valor: R$ %.2f\n", veiculos[i].valor);
            printf("Tipo de Combustível: ");

            switch (veiculos[i].tipocombustivel) {
                case 1:
                   printf("Etanol\n"); 
                   break;
                case 2:
                   printf("Gasolina\n"); 
                   break;
                case 3:
                   printf("Flex\n"); 
                   break;
                case 4: 
                   printf("Elétrico\n"); 
                   break;
                default: 
                   printf("Desconhecido\n");
            }
            printf("\033[0m");
            return;
        }
    }

    printf("\033[31mVeículo com ID %d não encontrado.\033[0m\n", buscaID);
}
