#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int getRandomNumber(int min, int max) {
    // return a random number between min and max
    srand(time(NULL));
    int delta = max - min;
    return min + (rand() % delta);
}

int main(void) {
    // The best developer is the lazy developer
    // No one wants to create that huge matrix of dates and temperatures from
    // medium/weather.c challenge. So your new challenge is to write some code that
    // will print that matrix for you using random numbers.

    // Extra points for a bit o realism.
    // The temperature must be between -10 and 40 degrees
    // And must not change more that 1 or 2 degrees per hour
}