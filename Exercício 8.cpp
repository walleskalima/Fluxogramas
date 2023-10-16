
#include <stdio.h>

float calculo(float n1, float n2, float n3){
    float x1 = n1;
    float x2 = n2;
    float y = n3;
    return (x1 + x2) + y + 2;
}

int main(){

    float n1, n2, n3;

    printf("Digite o valor de n1: ");
    scanf("%f", &n1);
    printf("Digite o valor de n2: ");
    scanf("%f", &n2);
    printf("Digite o valor de n3: ");
    scanf("%f", &n3);
    
     float resultado = calculo(n1, n2, n3);

    printf("O resultado é: %.1f\n", resultado);

    return 0;
}
