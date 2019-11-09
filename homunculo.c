#include <stdlib.h> 
#include <stdio.h>
#include <string.h> 

int main() {
    int n = 0;
    int m = 0;
    char* currentM;
    char* secuenciaN = NULL;

    printf("Ingresa n: \n");
    scanf("%d", &n);

    secuenciaN = (char*)malloc(n + 1);

    printf("Ingresa la secuencia de materiales presentes: \n");
    scanf("%s", secuenciaN);

    printf("Ingresa el total materiales requeridos: \n");
    scanf("%d", &m);

    printf("A continuacion, ingresaras la secuencia genetica de matertiales:\n");
    for( int alfa = 0; alfa < m; alfa ++ ){
        scanf("%s", currentM);
        if (strstr(secuenciaN, currentM) != NULL) {
            printf("SI\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}