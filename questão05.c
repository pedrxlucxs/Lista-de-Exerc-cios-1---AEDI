#include <stdio.h>
#include<math.h>

int main() {
    float valor_fabrica;

    printf("Informe o valor de fábrica do carro: ");
    scanf("%f", &valor_fabrica);

    float distribuidor = valor_fabrica * 28 / 100;
    float irf = valor_fabrica * 45 / 100;
    float valor_final = valor_fabrica + distribuidor + irf;

    printf("O valor final do carro é: %.4f", valor_final);

    return 0;

}
