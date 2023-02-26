#include <stdio.h>

int main()
{
    float r, a, c;
    printf("Introduza o raio: \n");
    scanf("%f", &r);
    a = 3.14 * (r * r);
    c = 2 * 3.14 * r;
    printf("A área é: %f.\nA circumferencia é: %f\n", a, c);
}