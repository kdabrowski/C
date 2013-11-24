#include <stdio.h>
int main(void)
{
int result[5], i, max, min;
i = 0;
while (i < 6)

	{
		printf("podaj liczbe \n");
		scanf("%d", &result[i]);
		++i;
	}
	max = 0;
		for (i = 0; i < 6; ++i)
		{
		if (result[i] > max)
			max = result[i];
		}
	min = max;
	i = 0;
		for (i = 0; i < 6; ++i)
		{
		if (result[i] < min)
			min = result[i];
		}
		printf("Maksymalna liczba to: %d \n Minimalna liczba to: %d \n" , max, min);
return 0;
}
