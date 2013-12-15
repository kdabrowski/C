#include <stdio.h>
#include <string.h>

void reverse(char a[]);

int main(void){
    char c[10];
    printf("podaj napis: ");
        scanf("%s", &c[0]);
        reverse(c);
        printf("%s\n", c);
   return 0;
}
void reverse(char a[]){
    int n;
    n = strlen(a);
    if (n == 0)
        return;
    else{
        putchar(a[n-1]);
        a[n-1]= '\0';
        reverse(a);
    }
}
