#include <stdio.h>
#include <string.h>

// Integrantes do grupo:
// Gisleine Muñoz Ticona - RM 563804

// Função para calcular a sequência de Fibonacci
void fibonacci() {
    int N;
    printf("Digite a quantidade de termos da sequência de Fibonacci (1 a 50): ");
    scanf("%d", &N);
    
    if (N < 1 || N > 50) {
        printf("Número fora do intervalo permitido.\n");
        return;
    }

    int fib[N];
    fib[0] = 0;
    if (N > 1) {
        fib[1] = 1;
    }

    for (int i = 2; i < N; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("Sequência de Fibonacci: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");
}

// Função para calcular fatoriais
void fatoriais() {
    int N;
    printf("Digite um número inteiro (1 a 20): ");
    scanf("%d", &N);
    
    if (N < 1 || N > 20) {
        printf("Número fora do intervalo permitido.\n");
        return;
    }

    printf("Fatoriais:\n");
    for (int i = 1; i <= N; i++) {
        int resultado = 1; // Inicializa o resultado do fatorial
        for (int j = 1; j <= i; j++) {
            resultado *= j; // Calcula o fatorial de i
        }
        printf("%d! = %d\n", i, resultado); // Imprime o resultado
    }
}

// Função para verificar palíndromo
void verificarPalindromo() {
    char palavra[101];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    int len = strlen(palavra);
    int isPalindromo = 1;

    for (int i = 0; i < len / 2; i++) {
        if (palavra[i] != palavra[len - 1 - i]) {
            isPalindromo = 0;
            break;
        }
    }

    if (isPalindromo) {
        printf("A palavra é um palíndromo.\n");
    } else {
        printf("A palavra NÃO é um palíndromo.\n");
    }
}

// Função para verificar substring
void verificarSubstring() {
    char str1[101], str2[101];
    printf("Digite a primeira string: ");
    scanf("%s", str1);
    printf("Digite a segunda string: ");
    scanf("%s", str2);

    if (strstr(str1, str2) != NULL) {
        printf("A segunda string está contida na primeira.\n");
    } else {
        printf("A segunda string NÃO está contida na primeira.\n");
    }
}

// Função principal
int main() {
    int opcao;

    do {
        printf("===== MENU DE EXERCÍCIOS =====\n");
        printf("1 - Sequência de Fibonacci\n");
        printf("2 - Fatoriais\n");
        printf("3 - Verificar Palíndromo\n");
        printf("4 - Verificar Substring\n");
        printf("5 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                fibonacci();
                break;
            case 2:
                fatoriais();
                break;
            case 3:
                verificarPalindromo();
                break;
            case 4:
                verificarSubstring();
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}
