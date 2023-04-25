/*
 * Main.c
 *
 *  Created on: 24 abr 2023
 *      Author: Usuario
 */


#include <stdio.h>
#include <stdlib.h>
#include "test_functions.h"

int main()
{
    int num1, num2, suma;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    suma = sumar(num1, num2);

    printf("La suma de %d y %d es %d.\n", num1, num2, suma);
    system("pause");

    return 0;
}
