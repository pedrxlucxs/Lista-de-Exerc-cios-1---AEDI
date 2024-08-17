#include <stdio.h>

int main() {
    float temperatura; 
    
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperatura);
    
    printf("A temperatura em Fahrenheit é: %.2f\n", temperatura * 1.8 + 32);
    
    return 0;
}