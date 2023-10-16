#include <stdio.h>

int main(){
    int vetor1[5], cubo[5];

    printf("Digite 5 números\n\n");
    for (int i = 0; i < 5; i++){
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    for (int i = 0; i < 5; i++){
        cubo[i] = vetor1[i] * vetor1[i] * vetor1[i];
    }
    printf("\nVetor principal:\n");
    for (int i = 0; i < 5; i++){
        printf("%d ", vetor1[i]);
    }

    printf("\n\nVetor cúbico:\n");
    for (int i = 0; i < 5; i++){
        printf("%d ", cubo[i]);
    }
    printf("\n");

    return 0;
}
