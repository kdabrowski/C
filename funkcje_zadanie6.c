#include <stdio.h>
#define ZAKRES  101;

int main (void){
    int x, y, i, wynik, odp, popraw;
    i  = 0;
    popraw = 0;
    odp = 0;
    for (i = 0; i <= 4; ++i){
        x = rand() % ZAKRES;
        y = rand() % ZAKRES;
        printf("podaj wynik z mnozenia %d oraz %d: ", x, y);
        scanf("%d", &odp);
            if (odp == x*y){
                ++popraw;
            }
    }
    printf("liczba poprawnych odpowiedzi to: %d \n", popraw);
return 0;
}
