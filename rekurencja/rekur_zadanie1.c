#include <stdio.h>

int main(void){

    int x, y, i;
    long long int wynik;
    printf("podaj liczbe n: ");
    scanf("%d", &x);
    printf("podaj liczbe k: ");
    scanf("%d", &y);
    wynik = x;
        for (i = 2; i <= y; i++){
            wynik = wynik * x;
        }
    printf("wynik %lld \n", wynik);
    return 0;
}
