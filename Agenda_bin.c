#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct{
    char nome[50];
    int idade;
    char tel[20];
}registro;


int main()
{
    FILE *fp = NULL;
    registro pessoa[100], aux;

    char filename[151], comando[8];


    scanf("%150s", filename);
    int i, j, tam, size;

    fp  =  fopen(filename, "a+b");

    fseek(fp, 0, SEEK_END);

    size = ftell(fp);
    tam = size/sizeof(registro);
    rewind(fp);

    fread(pessoa, sizeof(registro), tam, fp);
    fclose(fp);


    while(scanf("%7s", comando)!= EOF)
    {
        if(!strcmp("Inserir", comando))
        {
            scanf("%50s %d %20s", aux.nome, &aux.idade, aux.tel);

        if (tam < 100){
            pessoa[tam] = aux;
            printf("Registro %s %d %s inserido\n", pessoa[tam].nome, pessoa[tam].idade, pessoa[tam].tel);
            ++tam;
        }
        else printf("Espaco insuficiente\n");
    }
    else if (!strcmp("Alterar", comando)){
        scanf("%50s %d %20s", aux.nome, &aux.idade, aux.tel);
        for (i=0; i<=tam;  ++i){
            if(!strcmp(aux.nome, pessoa[i].nome))
            {
                pessoa[i] = aux;
                printf("Registro %s %d %s alterado\n", pessoa[i].nome, pessoa[i].idade, pessoa[i].tel);
                break;
            }
        }if (i == tam)
            printf("Registro %s invalido\n", aux.nome);

    }else if (!strcmp("Excluir", comando))
    {
        scanf("%50s", aux.nome);
        for (i=0; i<= tam; ++i)
        {
            if(!strcmp(aux.nome, pessoa[i].nome)){
                aux = pessoa[i];
            for (j=i; j<tam; ++j)
                pessoa[j] = pessoa[j+1];
            --tam;
            printf("Registro %s %d %s excluido\n", aux.nome, aux.idade, aux.tel);
            break;
        }
        if (i == tam)
            printf("Registro %s invalido\n", aux.nome);
    }
    }else if(!strcmp("Exibir", comando))
    {
        scanf("%50s", aux.nome);
        for (i=0; i<= tam; ++i)
        {
            if (!strcmp(aux.nome, pessoa[i].nome)){
                aux = pessoa[i];
                printf("Registro %s %d %s exibido\n", aux.nome, aux.idade, aux.tel);
                    break;
            }
            if (i == tam)
                printf("Registro %s invalido\n", aux.nome);
        }
    }
    else break;

    fp = fopen(filename, "wb");
    fwrite (pessoa, sizeof(registro), tam, fp);
    }
    return 0;
}
