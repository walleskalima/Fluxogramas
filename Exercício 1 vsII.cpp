#include <stdio.h>

int main(){
    char nome[20];

    printf("Digite um nome: ");
    scanf("%s", nome);

    for (int i = 0; i < 10; i++){
        printf("%s", nome);
        if (i < 9){
            printf(", ");
        }
    }
    return 0;
}