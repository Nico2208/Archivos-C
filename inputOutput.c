#include <stdio.h>
#define FIN 0
/*Copio el input en el output*/
int main(){
    int c;
    while ( (c = getchar()) != EOF){
        putchar(c);
    }
}