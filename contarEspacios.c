#include <stdio.h>

int main(){
    int c, nBlanks, nTabs, nLines;
    nBlanks=nLines=nTabs=0;
    while( (c=getchar()) != EOF){
        if(c == '\t')
            ++nTabs;
        if(c == '\n')
            ++nLines;
        if(c == 32)
            ++nBlanks;
    }
    printf("%d, %d, %d", nBlanks, nLines, nTabs);
}