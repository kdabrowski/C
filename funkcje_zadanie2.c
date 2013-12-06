#include <stdio.h>
#include <math.h>

int power ( int i); //deklaracja funkcji

int main (void){
    int a, i;
     a  = i = 1;
        for (i = 1; i < 10; i++){
            a = power(i);
                printf("%d\n", a);
        }
return 0;
        
}
//Funckja power liczaca silnie 
int power (int i){
    int x, wynik;
    x = wynik = 1;
    while (x <= i){
        wynik *= x;
        x++;
    }
    return wynik;
}
