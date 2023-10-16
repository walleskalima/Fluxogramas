#include <stdio.h>

int main(){
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 10 == 0){
        printf("%d é divisível por 10\n", numero);
    } 
    else if (numero % 5 == 0){
        printf("%d é divisível por 5\n", numero);
    } 
    else if (numero % 2 == 0){
        printf("%d é divisível por 2\n", numero);
    } 
    else{
        printf("%d não é divisível por nenhum destes números\n", numero);
    }
    return 0;
}
