#include <stdio.h>

int main() {
    int number;
    printf("Odd numbers between 1 and 100\n");

    //Definir o valor de number
    number = 1;

    //Enquanto o valor de number for menor ou igual a 100, printf.
    while(number <= 100) {;
        printf("%d ", number);

    //No final, acrescentar +2 ao valor anterior.
    number = number + 2;
    }

return 0;
}