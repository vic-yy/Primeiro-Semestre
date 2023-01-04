#include <stdio.h>
struct cadastro {
    char nome[50];
    int idade;
    float salario;
    
};

int main()
{
    struct cadastro cad[4];
    int i;
    
    for (i = 0; i < 4 ; ++i){
        scanf ("%s", cad[i].nome);
        scanf ("%d", &cad[i].idade);
        scanf ("%f", &cad[i].salario);
        
    }
    
    for (i = 0; i < 4 ; ++i){
        
        printf ("Registro ");
        printf ("%s ", cad[i].nome );
        printf ("%d ", cad[i].idade );
        printf ("%.2f\n", cad[i].salario );
    }
    
    

return 0;
}