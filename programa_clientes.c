#include <stdio.h>
#include <stdlib.h>

// Estrutura que armazena dados dos clientes
struct dados {
    int codigo;
    char nome[50];
    int idade;
    char sexo;
    float salario;
};

// Array global
struct dados cliente[5];

// Função que imprimi os dados dos clientes
void imprimirDados(struct dados cli[]) {
    int i;
    printf("\n--- Dados dos Clientes ---\n");
    for (i = 0; i < 5; i++) {
        printf("\nCliente %d:\n", i + 1);
        printf("Codigo: %d\n", cli[i].codigo);
        printf("Nome: %s\n", cli[i].nome);
        printf("Idade: %d\n", cli[i].idade);
        printf("Sexo: %c\n", cli[i].sexo);
        printf("Salario: %.2f\n", cli[i].salario);
    }
}

// Função que calcula e retorna a soma das idades
int somaIdades(struct dados cli[]) {
    int i, soma = 0;
    for (i = 0; i < 5; i++) {
        soma = soma + cli[i].idade;
    }
    return soma;
}

// Função principal
int main() {
    int i;
    int somaTotal;
    int mediaIdade;
    
    printf("Cadastro de Clientes\n\n");
    
    // Entrada de dados dos 5 clientes
    for (i = 0; i < 5; i++) {
        printf("Cliente %d:\n", i + 1);
        printf("Codigo: ");
        scanf("%d", &cliente[i].codigo);
        printf("Nome: ");
        scanf(" %[^\n]", cliente[i].nome);
        printf("Idade: ");
        scanf("%d", &cliente[i].idade);
        printf("Sexo (M/F): ");
        scanf(" %c", &cliente[i].sexo);
        printf("Salario: ");
        scanf("%f", &cliente[i].salario);
        printf("\n");
    }
    
    // Chama a função para imprimir dados
    imprimirDados(cliente);
    
    // Calcula soma e média das idades
    somaTotal = somaIdades(cliente);
    mediaIdade = somaTotal / 5;
    
    printf("\nSoma das idades: %d\n", somaTotal);
    printf("Media de idade: %d\n", mediaIdade);
    
    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    
    return 0;
}
