#include <stdio.h>

int main (void){
    int *wskA, *wskB;
    int tabA[2][2] = {{12,4},{12}};
    int tabB[2][2] = {{12},{20,16}};
    wskA = tabA[0];
    wskB = tabB[1][1];

    printf ("TabA %d\n", *wskA+1);
    printf ("TabB %d\n", *wskB+2);
}
