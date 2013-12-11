#include<stdio.h>
#include<math.h>

long long int newton (int x, int y);
long long int power (int i);

int main (void){
    int x, y; 
    long long int wynik;

    printf("podaj liczbe x ");
    scanf("%d", &x);
    printf("podaj liczbe y ");
    scanf("%d", &y);
    wynik = newton(x,y);
    printf("%lld \n", wynik);
}

/* Funkcja licząca symbol Newtona */

long long int newton (int x, int y){
    long long int result;
    result = 0;
    result = div(power(x),power(y)*power(x-y));
    return result;
    
}

/*Funkcja liczaca silnie */

long long int power (int i){
    long long int x, wynik;
    x = wynik = 1;
    while (x <= i){
    wynik *= x;
    x++;
    }
    return wynik;
}

