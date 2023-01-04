#include <stdio.h>
#include <stdlib.h>


int Bissexto(int ano){
    if(ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0))
        return 1;
    else
        return 0;
}



int main()
{
    int d, z;
    while (scanf("%d", &d)!=EOF){

    z = Bissexto(d);
    printf ("%d\n", z);
    }
    return 0;
    }

