#include <stdio.h>
#include<math.h>

int main() {

    float pescado;

    printf("Informe quantos Kg pescou: ");
    scanf("%f", &pescado);

    float multa = 0;
    float excesso = 0;

    if (pescado > 50)
    {
        excesso = pescado - 50;
        multa = excesso * 4;
    }
    
    printf("Limite ultrapassado: %.2f\n", excesso);
    printf("Valor da multa: %.2f\n", multa);

    return 0;

}
