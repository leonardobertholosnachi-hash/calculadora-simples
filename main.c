
#include <stdio.h>

int main() {
    int NUMERO;
    float num1, num2;
    char SN = 's';
    char entrada[100], extra;

    do {
        printf("===============================\n");
        printf("   Calculadora Simples\n");
        printf("===============================\n");
        printf("Selecione uma operação:\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Opção:\n");

        while(1) {
            scanf(" %99[^\n]", entrada);

            if(sscanf(entrada, "%d %c", &NUMERO, &extra) == 1 && NUMERO >= 1 && NUMERO <= 5) {
                break;
            }

            printf("Opção inválida! Digite um número inteiro de 1 a 5.\n");
            printf("Opção:\n");
        }

        if(NUMERO == 1) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);

            printf("Digite o segundo numero: ");
            scanf("%f", &num2);

            printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
        }

        if(NUMERO == 2) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);

            printf("Digite o segundo numero: ");
            scanf("%f", &num2);

            printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
        }

        if(NUMERO == 3) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);

            printf("Digite o segundo numero: ");
            scanf("%f", &num2);

            printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
        }

        if(NUMERO == 4) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);

            printf("Digite o segundo numero: ");
            scanf("%f", &num2);

            if(num2 == 0) {
                printf("Erro: não é possível dividir por zero.\n");
            } else {
                printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            }
        }

        if(NUMERO == 5) {
            printf("Obrigado por usar a calculadora! Até a próxima.");
            break;
        }

        if(NUMERO >= 1 && NUMERO <= 4) {
            do {
                printf("Deseja realizar outra operação?\n");
                printf("(s/n): ");
                scanf(" %c", &SN);

                if(SN != 's' && SN != 'S' && SN != 'n' && SN != 'N') {
                    printf("Resposta inválida! Digite s ou n.\n");
                }

            } while(SN != 's' && SN != 'S' && SN != 'n' && SN != 'N');

            if(SN == 's' || SN == 'S') {
                printf("Voltando ao menu...\n");
            } else {
                printf("Obrigado por usar a calculadora! Até a próxima.\n");
            }
        }

    } while(SN == 's' || SN == 'S');

    return 0;
}
