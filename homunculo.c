#include <stdlib.h> 
#include <stdio.h>
#include <string.h> 
int main() {
    int n = 0;
    int m = 0;
    char* currentM;
    char* secuenciaN = NULL;

    scanf("%d", &n);

    secuenciaN = (char*)malloc(n + 1);
    for(int i=1;i<=n;i++){
    scanf("%s", secuenciaN);
 }
    scanf("%d", &m);

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
