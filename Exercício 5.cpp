#include <stdio.h>

int main(){
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero >= 100 && numero <= 200){
        printf("Você digitou um número entre 100 e 200\n");
    } 
    else{
        printf("Você digitou um número fora da faixa de 100 a 200\n");
    }
    return 0;
}
