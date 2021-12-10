#include <stdio.h>

void main()
{
    int h,w;

    for(h=1;h<=1000;h++)
    {
        for(w=1;w<=100;w++)
        {
            if(h == 1 || h == 1000 || w == 1 || w == 100)
            {
                printf("*");
            }
            else
            {
            printf(" ");
            }
        }
        printf("\n");
    }
}   
