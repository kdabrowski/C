#include <stdio.h>
#include <string.h>
/*
int switch (int liczba);

int main (void){
    int liczba;
    printf("podaj liczbe calkowita: ");
    scanf("%d", liczba);
}
*/
// funkcja do zamiany kolejnosci liczb
int main (char liczba, int dlugosc){
            char strTo[10], strRev[10];
            char liczba;
            int i, y;
            strcpy (liczba, strTo);
            i = 10;
            y = 0;
            while (i >=0){
                strTo[i]=strRev[y];
                --i;
                ++y;
            }
            puts(strRev)

        return 0;
    
}
