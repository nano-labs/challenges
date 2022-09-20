#include <stdio.h>

int number;
float average = 0.0;

int main(void) {
    while (true) {
        printf("Type a number: ");
        scanf("%d", &number);

        // calculate the current average here

        printf("Your current average is %2f\n", average);
    }
}