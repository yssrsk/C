//read and write to dynamic memory

#include <stdio.h>
#include <stdlib.h>

int main(){
    //initialize pointer variable
    int *day;
    //allocate memory
    day = calloc(4, sizeof(*day));

    //assign value to variable, like an array
    day[1] = 10;
    day[2] = 30;
    day[3] = 40;

    printf("%i\n%i\n%i", day[0], day[1], day[2]);
}