#include <stdio.h>
//LOWER, UPPER and STEP are symbolic constants
#define LOWER 0
#define UPPER 300
#define STEP 20

int main(){
    /*printf("Ingrese una temperatura\n");
    char c=getchar();
    putchar(c);*/
    float fahr;
    printf("Celcius to Farenheit\n");
    for(fahr = UPPER; fahr >= LOWER; fahr -= STEP){ //the conversion is done before the operation
        printf ("%3.0f %13.1f\n", (5.0 / 9.0) * (fahr-32), fahr);
    }
}