#include <stdio.h>

int main() {
    int x = 42;
    int *p = &x;

    printf("El contenido del puntero (*p): %d\n", *p);
    printf("La direccion de memoria almacenada por el puntero (p): %p\n", p);
    printf("La direccion de memoria de la variable (&x): %p\n", &x);
    printf("La direccion de memoria del puntero (&p): %p\n", &p);
    printf("El tamano de memoria utilizado por la variable (sizeof(x)): %zu bytes\n", sizeof(x));

    return 0;
}
