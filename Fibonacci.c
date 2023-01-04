#include <stdio.h>
#include <stdlib.h>

int main() {
    /* Allocate an array of MAX_N integers */;
    int list [100], n, i, x;

do{
    scanf ("%d", &n);

    /* Set the initial conditions */
    list[0] = 0;
    list[1] = 1;
    /* Do Fibonacci */
    for(int i = 2; i < n; i++) {
        list[i] = list[i-1] + list[i-2];
        if (x < list[i]){
            x = list[i];
        }}printf ("%d\n", x);
    }while (n >= 0 && n <800);
printf ("%d", x);



     return 0;}
