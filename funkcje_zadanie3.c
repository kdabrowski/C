# include <stdio.h>
# include <math.h>

int perfect (int x); // delkaracja funkcji perfect

int main (void) {
    int i, wynik;
        for (i=1; i <= 10000 ; i++){
            wynik = power(i) 
            if (wynik == 1)         //jesli funkcja zwrocila 1 pokaz na erkanie 
                printf("%d\n", i);
        }
return 0;
}

int power (int i){
    int licznik, suma_dziel, wynik;
        suma_dziel = 0;
        licznik = 1;
        while (licznik <= i/2){         
            if (i % licznik == 0){          //sprwdz czy reszta z dzielenia to 0
                suma_dziel = suma_dziel + licznik; // jesli tak dodaj do sumy dzielnikow
                ++licznik;
            }
            else 
                ++licznik;
            
        }
        if (suma_dziel == i)    // jesli suma dzielnikow rowna sie i zwroc true (1)
            wynik = 1;
        else 
            wynik = 0;
return wynik;
}

