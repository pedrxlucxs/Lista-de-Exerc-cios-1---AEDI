#include <stdio.h>

int main() {
    float lado;
    
    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);
    
    printf("O dobro da area do quadrado é: %.2f\n", lado * lado * 2);
    
    return 0;
}