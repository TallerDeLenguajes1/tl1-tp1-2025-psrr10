#include <stdio.h>

int cuadrado(int x) {
    return x * x;
}

void cuadrado_void(int x) {
    printf("El cuadrado de %d es: %d\n", x, x * x);
}

void mostrar(int *var) {
    printf("Direccion de la variable: %p, Contenido: %d\n", var, *var);
}

void Invertir(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void orden(int *a, int *b) {
    if(*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int op1, op2, var;

    printf("Ingrese un numero para calcular su cuadrado (funcion int): ");
    scanf("%d", &op1);
    printf("El cuadrado de %d es: %d\n", op1, cuadrado(op1));

    printf("\nIngrese un numero para calcular su cuadrado (funcion void): ");
    scanf("%d", &op1);
    cuadrado_void(op1);

    printf("\nIngrese un valor para mostrar su direccion y contenido: ");
    scanf("%d", &var);
    mostrar(&var);

    printf("\nIngrese dos numeros para invertir: ");
    scanf("%d %d", &op1, &op2);
    printf("Antes de invertir: op1 = %d, op2 = %d\n", op1, op2);
    Invertir(&op1, &op2);
    printf("Despues de invertir: op1 = %d, op2 = %d\n", op1, op2);

    printf("\nIngrese dos numeros para ordenar (menor, mayor): ");
    scanf("%d %d", &op1, &op2);
    printf("Antes de ordenar: op1 = %d, op2 = %d\n", op1, op2);
    orden(&op1, &op2);
    printf("Despues de ordenar: op1 = %d, op2 = %d\n", op1, op2);

    return 0;
}
