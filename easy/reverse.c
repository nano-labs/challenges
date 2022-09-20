#include <stdio.h>
#include <string.h>

void test(char s[]) {
    if (strcmp(s, "notlob") == 0) {
        printf("Perfect! A palindrome for 'bolton' is 'notlob'!\n");
    } else {
        printf("Wrong!\n\tExpected: notlob\n\tReceived: %s\n", s);
    }

}

int main(void) {
    char string[] = "bolton";

    // Write your code here
    char arr[strlen(string)];
    int x = 0; 
    for(int i = strlen(string)-1; i<strlen(string); i--){
        arr[x] = string[i];
        x++;
    }
    for(int i = 0; i< strlen(string); i++){
       string[i]= arr[i];
    }
    // Your could must reverse the string "bolton" and turn into "notlob"


    // Then test if it is correct
    test(string);
}