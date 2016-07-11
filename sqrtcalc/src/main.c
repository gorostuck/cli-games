#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "constants.h"

int main ()
{
    int input = 1;
    unsigned int score = 0;
    unsigned int max_range = 1;
    printf("%s\n%s", START, MAX_Q);
    while (scanf ("%u", &max_range)!=0);
    while (1){
        unsigned int sqrt_of   = rand() % max_range;
        printf("%s%d\n", ENUN, sqrt_of);
        scanf("%d", &input);
        int sqrt_a = sqrt(sqrt_of);
        double sqrt_full = sqrt(sqrt_of); 
        if (input == 0) break;
        if (input != sqrt_a) {
            printf("%s\n", FAIL);
            printf("%s%d(%f)\n", ANSW, sqrt_a, sqrt_full);
        } else { 
            printf("%s\n", SUCCESS);
            ++score; 
        }
    }
    printf("%s%d\n", EXIT, score);
    return 0;
}
