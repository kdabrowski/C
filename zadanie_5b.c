/* Program ten dla dwóch liczb wczytanych z klawiatury
   wypisuje, która z nich jest większa. */
#include <stdio.h>
int main()
{
   int liczbaA; 
   int liczbaB;

   printf("Podaj pierwsza liczbe: ");
   scanf("%i", &liczbaA);
   printf("Podaj druga liczbe ");
   scanf("%i", &liczbaB);
 	if ( liczbaA > liczbaB)
 		 printf("Wieksza jest %i \n ", liczbaA);
			 
else
	
		 printf("Wieksza jest %i \n", liczbaB);

return 0;
 
}

