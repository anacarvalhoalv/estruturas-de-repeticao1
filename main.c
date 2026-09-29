#include <stdio.h>

int main() {

    int numero, soma = 0, maior = -2147483647, menor = 2147483647;

    printf("Digite um numero para rodar o programa ou digite 0 para encerrar.\n");

    while (1) {

        printf("\n\nDigite um numero: ");
        scanf("%d", &numero);

        if (numero == 0){
            break;
        }

        soma = soma + numero;
        
        if (numero > maior) {
        maior = numero;
        }

        if (numero < menor) {
        menor = numero;
        }
    }
    printf("\nMaior numero: %d\nMenor numero: %d\n", maior, menor);
    printf("\nSoma de todos os numeros: %d\n", soma);

 return 0;
}