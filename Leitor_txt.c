#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contador(char *string){
    int i, n=0;
    for (i=0; i <strlen(string);++i)
        if(string[i]=='a')
        n++;
    return n;
}


int main(int argc, char *argv[]){
    int n = 0, i;
    char string[100];
    FILE *arq = fopen(argv[1], "r");

    while(fscanf(arq, "%s", string)!= EOF)
        n+=contador(string);
    printf("%d", n);
}
