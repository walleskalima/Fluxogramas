#include <stdio.h>

int main(){
    int vetor1[5], vetor2[5], soma[5];

    printf("Digite os elementos do primeiro vetor\n");
    for (int i = 0; i < 5; i++){
        printf("Vetor1[%d]: ", i);
        scanf("%d", &vetor1[i]);
    }

    printf("\n");
    printf("Digite os elementos do segundo vetor\n");
    for (int i = 0; i < 5; i++){
        printf("Vetor2[%d]: ", i);
        scanf("%d", &vetor2[i]);
    }

    printf("\n");
    for (int i = 0; i < 5; i++){
        soma[i] = vetor1[i] + vetor2[i];
    }
    printf("Números nos vetores e somas: ");
    for (int i = 0; i < 5; i++){
        printf("Vetor1[%d]: %d, Vetor2[%d]: %d, Soma[%d]: %d\n", i, vetor1[i], i, vetor2[i], i, soma[i]);
    }
    return 0;
}
