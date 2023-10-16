#include <stdio.h>

int main() {
    int i, numero;
    int produto = 1;

    i = 1;
    printf("Digite um valor positivo: ");
    scanf("%d", &numero);

    while (i <= numero){
        printf("%d", i);
        produto *= i;
        
        if (i < numero){
            printf(", ");
        }
        else{
            printf("\n");
        }
        i++;
    }
    printf("O produto dos números de 1 a %d é: %d\n", numero, produto);
    return 0;
}