#include <stdio.h>
#include <math.h>
int main() {

double x;
double z;
	printf("wpisz liczbe rzeczywista  \n");
	scanf("%lf", &x);
		while (x < 0){
			printf ("%lf to nie jest liczba rzeczywista \n sprobuj jeszcze raz \n", x);
			scanf("%lf",& x);
	}
	z = sqrt(x);
	printf("Pierwiastek kwadratowy z %lf to %lf\n", x, z);
return 0;
}
