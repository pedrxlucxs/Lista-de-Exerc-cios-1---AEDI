#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2;

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite mais um número: ");
    scanf("%d", &num2);

    int dobro_num1 = num1 * 2;
    float triple_double = num1 * 3 + num2 / 2;
    double raiz = sqrt(num1 + num2);

    printf("O produto do dobro do primeiro número é: %d\n", dobro_num1);

    printf("A soma do triplo do primeiro número com a metade do segundo número é: %.2f\n", triple_double);

    printf("A raiz quadrada da soma do primeiro número com o segundo número é: %.2f\n", raiz);

    return 0;
}
