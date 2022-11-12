// Algoritmo que muestra en pantalla la secuencia de Collatz, empezando con un número entero digitado por el usuario.

#include <stdio.h>
#include <stdbool.h>

int collatz(int);           // Prototipo de función.

void main(void)
{
    int num, termino;

    printf("\nDigite, por favor, un número entero: ");
    scanf("%d", &num);

    printf("\nLA SECUENCIA DE COLLATZ ES:\n\n");
    printf("%d", num);

    while(true)
    {
        termino = collatz(num);
        printf(", %d", termino);

        if (termino == 1)
            break;

        num = termino;
    }

    printf("\n");
}

int collatz(int N)
{
    int res;

    if (N % 2 == 0)
        res = N / 2;
    else if (N % 2 == 1)
        res = 3 * N + 1;

    return (res);
}