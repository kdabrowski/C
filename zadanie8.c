#include <stdio.h>
#include <math.h>
int main() {

int x, y, z, suma, iloczyn, najmniejsza, najwieksza;
        printf("wpisz pierwsza liczbe pierwsza \n",x);
        scanf("%d", &x);
        printf("wpisz pierwsza liczbe druga \n", y);
        scanf("%d", &y);
        printf("wpisz pierwsza liczbe trzecia \n",z);
        scanf("%d", &z);
	if (x>y)	
		y = najwieksza;
		
	else
		x = najwieksza;
	if (najwieksza > z)
		najwieksza = najwieksza;
	else
		najwieksza = z;

	printf("suma twoich liczb to %d \niloczyn twoich liczb to %d \n najwieksza liczba to %d \n", suma, iloczyn, najwieksza);
  
      return 0;
}                                                                                                                                                                                                                                            
