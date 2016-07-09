#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "constants.h"

int main ()
{
    printf("%s\n", START);
    int input = 1;
    unsigned int score = 0;
    while (input!=0){
        unsigned int sqrt_of   = rand() % 100;
        printf("%s%d\n", ENUN, sqrt_of);
        if (scanf("%d", input)==0)
            printf("%s\n",ERR);
        else {
            double sqrt_a = sqrt(sqrt_of);
            if (input != sqrt_a)
                printf("%s\n", FAIL);
            else { printf("%s\n", SUCCESS); ++score; }
        }
    }
    printf("%s%d\n", EXIT, score);
    return 0;
}
