#include <stdio.h>

int main(){
    int c, numWord;
    int vWords[5];

    for (int i = 0; i < 5; i++){
        numWord=0;
        while( (c = getchar()) != EOF){
            if (c != '\n')
                ++numWord;
        }
        vWords[i] = numWord;
    }


    printf ("Hola, este es un cambio nuevo\n");
    

    printf("Histograma\n");

    for (int i = 0; i < 5; ++i){
        for (int j = 0; j < vWords[i]; j++)
            printf("-");
        printf("\n");
    }
}
