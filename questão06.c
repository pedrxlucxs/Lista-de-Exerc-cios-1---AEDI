#include <stdio.h>
#include<math.h>

int main() {
    float tempo, velocidade, litros, distancia;

    printf("Informe o tempo que gastou na viagem: ");
    scanf("%f", &tempo);

    printf("Informe a velocidade média da viagem: ");
    scanf("%f", &velocidade);

    distancia = tempo * velocidade;

    litros = distancia / 12;

    printf("Distância da viagem: %.2f", distancia);
    printf("Quantidade de gasolina utilizada: %.2f", litros);

    return 0;

}