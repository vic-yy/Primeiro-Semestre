#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *removeChar (char *texto, char caractere)
{
    int len = strlen(texto);
    int i, j;
    for (i = 0; i < len; ++i){
        if (texto[i] == caractere){
            for (j = i; j < len; ++j){
                texto[j] = texto[j+1];
            }
            len --;
            i--;
    }

    }
}

int main (void)
{
    char texto[100];
    char caractere;
    fgets(texto, 100, stdin);
    scanf("%c", &caractere);
    removeChar(texto, caractere);
    printf("%s", texto);

}
