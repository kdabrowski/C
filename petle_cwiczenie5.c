#include <stdio.h>

int main(void)
{
int result[5], i, y;

i = 0;
while (i < 6)

	{
		printf("podaj liczbe \n");
		scanf("%d", &result[i]);
		++i;
	}
		for (i = 0; i < 6; ++i)
		printf ("twoje liczby to %d  \n", result[i]);
return 0;
}
