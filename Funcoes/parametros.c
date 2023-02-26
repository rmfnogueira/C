#include <stdio.h>

// passar parametros por valor

int valor(int v)
{
    return v;
}

// passar parametros por pointer
void aponta(int *ap) // funcao aceita pointer para int
{
    *ap = 44; // dereferencia o pointer e atribui valor ao objeto apontado (ap)
}

int main(void)
{
    // a utilizar valor
    int val = 5;
    printf("O valor da variavel antes chamada de funcao: %d\n", val);
    valor(val);
    printf("O valor da variavel depois chamada de funcao: %d\n", val);

    // a utilizar Pointer
    int apon = 55;
    printf("O valor da variavel antes chamada de funcao: %d\n", apon);
    aponta(&apon); //como foi declarado o pointer para ap, utilizamos o operador address-of para aponter para int no parametro passado. 
    printf("O valor da variavel depois chamada de funcao: %d\n", apon);
}