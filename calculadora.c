#include <stdio.h>

int main() {
    int NUMERO;
    int num1, num2;
    char SN = 's';

   do { printf("===============================\n");
    printf("   Calculadora Simples\n");
    printf("===============================\n");
    printf("Selecione uma operação:\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("5. Sair\n");
    printf("Opção:\n");

scanf("%d", &NUMERO);

if(NUMERO == 1){
printf("Digite o primeiro numero: ");
scanf("%d", &num1);

printf("Digite o segundo numero: ");
scanf("%d", &num2);

printf("Resultado: %d + %d = %d\n", num1, num2, num1 + num2);
printf("Deseja realizar outra operação?");
printf("(s/n):");

scanf(" %c", &SN);
if (SN == 's') {
    printf("Voltando...\n");
} else {
    printf("Obrigado por usar a calculadora! Até a próxima.\n");
}

}
if(NUMERO == 2){
printf("Digite o primeiro numero: ");
scanf("%d", &num1);

printf("Digite o segundo numero: ");
scanf("%d", &num2);

printf("Resultado: %d - %d = %d\n", num1, num2, num1 - num2);
printf("Deseja realizar outra operação?");
printf("(s/n):");

scanf(" %c", &SN);
if (SN == 's') {
    printf("Voltando ao menu...\n");
} else {
    printf("Obrigado por usar a calculadora! Até a próxima.\n");
}
}

if(NUMERO == 3){
printf("Digite o primeiro numero: ");
scanf("%d", &num1);

printf("Digite o segundo numero: ");
scanf("%d", &num2);

printf("Resultado: %d * %d = %d\n", num1, num2, num1 * num2);
printf("Deseja realizar outra operação?");
printf("(s/n):");

scanf(" %c", &SN);
if (SN == 's') {
    printf("Voltando ao menu...\n");
} else {
    printf("Obrigado por usar a calculadora! Até a próxima.\n");
}
}

if(NUMERO == 4){
printf("Digite o primeiro numero: ");
scanf("%d", &num1);

printf("Digite o segundo numero: ");
scanf("%d", &num2);

printf("Resultado: %d / %d = %d\n", num1, num2, num1 / num2);
printf("Deseja realizar outra operação?");
printf("(s/n):");

scanf(" %c", &SN);
if (SN == 's') {
    printf("Voltando ao menu...\n");
} else {
    printf("Obrigado por usar a calculadora! Até a próxima.\n");
}
}

if(NUMERO == 5){
    printf("Obrigado por usar a calculadora! Até a próxima.");
    break;
}

} while (SN == 's' || SN == 'S');

    return 0;
}
