#include <stdio.h>

    int main() {

        //Definir a vari]avel number.
        int number;
        
        printf("Odd numbers between 1 and 100\n");

        //Definir o limite dos resultados e o acrescimo de +1
        for(number = 1; number <= 100; number++) {
                //Calcular o resto da divisao de number por 2 e comparar o resultado com 1
                if(number%2 == 1) {
                    printf("%d ", number); //Se o resultado for =1, printf o number
                }

        }

            return 0;
    }