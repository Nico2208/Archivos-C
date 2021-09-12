#include <stdio.h>


int main () {
    printf("Por favor, ingrese un caracter:\n");
    int c = getchar();
    printf("El valor del caracter sera modificado al de EOF\n");
    c = EOF;
    printf("%d", EOF);
}