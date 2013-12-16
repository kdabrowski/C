#include <stdio.h>
#include <stdarg.h>
#define MAX 512

    int main(void){
    int  i, *p, a[MAX];
    i = 0;
    p = &a[0];
    for (i=0 ; i <  MAX; i++){
        *(p+i) = 128;
    }
    printf("Addres first value of pointer  %d last value of pointer  %d warosc \n", *p, *(p+(MAX-1)));

}
