#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char **argv) //arc =  numero da posição argv
{
    char filename[20];

    scanf("%s\n", filename);
    FILE *arquivo = fopen(filename, "rb");

    char c;
    int contador = 0;

    if(arquivo == NULL)
    {
        exit(1);
    }


    while((c = fgetc (arquivo))!=EOF)
    {
        if (c == 'a'){
            contador++;
        }
    }
    printf("%d\n", contador);
    fclose(arquivo);

    return 0;
}
