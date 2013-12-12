#include<stdio.h>

char odwroc(char a[]);

int main(void){
    int i, y;
    char c[10];
    printf("podaj napis: ");
        fgets(c, 10, stdin);
        odwroc(c);
        printf("%s\n", c);
   return 0;
}

char  odwroc(char a[]){
    int i, y;
    char wynik[10];
    y = 0;
    i = 10;
    while (i >= 0){
    a[i] = wynik[y];
    --i;
    ++y;
    }

    return wynik[10];
}
