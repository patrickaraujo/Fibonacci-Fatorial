#include <stdio.h>

// Função iterativa para calcular o fatorial
int fatorialIt(int n) {
    if (n < 0) {
        printf("Erro: O fatorial não está definido para números negativos.\n");
        return -1; // Retorna -1 para indicar erro
    }

    int resultado = 1; // Inicializa o resultado como 1 (caso base do fatorial)

    for (int i = 1; i <= n; i++) {
        resultado *= i; // Multiplica o resultado pelo valor atual de i
    }

    return resultado;
}

// Função recursiva para calcular o fatorial
int fatorialRc(int n) {
    if (n < 0) {
        printf("Erro: O fatorial não está definido para números negativos.\n");
        return -1; // Retorna -1 para indicar erro
    }
    if (n == 0)
        return 1;
    return n * fatorialRc(n - 1);
}

// Função iterativa para calcular o n-ésimo número de Fibonacci
int fibIt(int n) {
    if (n <= 0) {
        printf("Erro: O índice deve ser maior que zero.\n");
        return -1; // Retorna -1 para indicar erro
    }

    if (n == 1 || n == 2) {
        return 1; // Os dois primeiros números de Fibonacci são 1
    }

    int anterior = 1; // Primeiro número da sequência
    int atual = 1;    // Segundo número da sequência
    int proximo = 0;  // Variável para armazenar o próximo número

    for (int i = 3; i <= n; i++) {
        proximo = anterior + atual; // Calcula o próximo número
        anterior = atual;           // Atualiza o anterior
        atual = proximo;            // Atualiza o atual
    }

    return atual; // Retorna o n-ésimo número
}

// Função recursiva para calcular o n-ésimo número de Fibonacci
int fibRc(int n) {
    if (n <= 0) {
        printf("Erro: O índice deve ser maior que zero.\n");
        return -1; // Retorna -1 para indicar erro
    }
    if (n == 1 || n == 2)
        return 1;
    return fibRc(n - 1) + fibRc(n - 2);
}

int main() {
    int opcao, numero, resultado;

    do {
        // Menu de opções
        printf("\nEscolha uma opção:\n");
        printf("1. Fatorial Iterativo\n");
        printf("2. Fatorial Recursivo\n");
        printf("3. Fibonacci Iterativo\n");
        printf("4. Fibonacci Recursivo\n");
        printf("5. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite um número para calcular o fatorial (iterativo): ");
                scanf("%d", &numero);
                resultado = fatorialIt(numero);
                if (resultado != -1) {
                    printf("O fatorial de %d é %d\n", numero, resultado);
                }
                break;

            case 2:
                printf("Digite um número para calcular o fatorial (recursivo): ");
                scanf("%d", &numero);
                resultado = fatorialRc(numero);
                if (resultado != -1) {
                    printf("O fatorial de %d é %d\n", numero, resultado);
                }
                break;

            case 3:
                printf("Digite um índice para calcular o número de Fibonacci (iterativo): ");
                scanf("%d", &numero);
                resultado = fibIt(numero);
                if (resultado != -1) {
                    printf("O %dº número de Fibonacci é %d\n", numero, resultado);
                }
                break;

            case 4:
                printf("Digite um índice para calcular o número de Fibonacci (recursivo): ");
                scanf("%d", &numero);
                resultado = fibRc(numero);
                if (resultado != -1) {
                    printf("O %dº número de Fibonacci é %d\n", numero, resultado);
                }
                break;

            case 5:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }

    } while (opcao != 5); // Repete até que o usuário escolha sair

    return 0;
}
