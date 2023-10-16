#include <stdio.h>

int main(){
    int tamanho, numero;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++){
        printf("Digite o elemento %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Digite o número que deseja pesquisar: ");
    scanf("%d", &numero);

    int encontrado = 0;
    for (int i = 0; i < tamanho; i++){
        if (vetor[i] == numero){
            printf("O número %d foi encontrado na posição %d do vetor\n", numero, i);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado){
        printf("O número %d não foi encontrado no vetor\n", numero);
    }
    return 0;
}

