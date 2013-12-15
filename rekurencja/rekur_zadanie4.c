#include<stdio.h>

int euklides(int a, int b);

int main (void){
    int x,y,c;

    printf("Podaj pierwsza liczbe ");
    scanf("%d", &x);
    printf("Podaj pierwsza liczbe ");
    scanf("%d", &y);
    c = euklides(x,y);
    printf("Najmniejszy wspolny dzielnik to %d\n  ", c);
}

int euklides(int a, int b){
    int c;
        while(b!=0){
        c=a%b;
        a=b;
        b=c;
    }
    return a;
    }


