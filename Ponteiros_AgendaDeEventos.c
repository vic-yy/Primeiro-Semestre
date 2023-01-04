#include "stdio.h"

enum mes {jan = 1, fev, mar, abr, mai, jun, jul, ago, set, out, nov, dez};

typedef struct {
    int dia;
    enum mes m;
    int ano;
} Data;
typedef struct {
    char nome [100];
    char local [100];
    Data d;
}Evento;

void cadastrar_eventos(Evento agenda[], int n){
    int i, date;

    for (i=0; i < n; ++i){
        scanf("%s %s", &agenda[i].nome, &agenda[i].local);
        scanf ("%d %d %d", &agenda[i].d.dia, &agenda[i].d.m , &agenda[i].d.ano);
    }
    Data d;
    scanf ("%d %d %d", &d.dia, &d.m, &d.ano);
    imprimir_eventos(agenda,d,n);
}
void imprimir_eventos(Evento agenda[], Data d, int n){
    int i, flag = 0;

    for (i=0; i < n; ++i){
        if (agenda[i].d.dia == d.dia && agenda[i].d.m == d.m && agenda[i].d.ano == d.ano){
            printf("%s %s\n", agenda[i].nome, agenda[i].local);
        flag ++;
        }
    }
    if (flag != 0){
        return;
    }
    printf ("Nenhum evento encontrado!\n");

}

int main(void){
    int n;
    scanf ("%d", &n);
    Evento agenda[n];
    cadastrar_eventos(agenda, n);
}

