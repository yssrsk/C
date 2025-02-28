#include <stdio.h>

int main(){
    int high = 50;
    int low = 10;
    int mid = 25, lowmid = 15;

    // standard if else
    if (high > low){
        printf("High is higher\n");
    } else if (high < low){
        printf("Low is higher\n");
    } else {
        printf("You're an idiot");
    }

    // short hand if else
    (mid > lowmid) ? printf("Mid is higher") : printf("Lowmid is higher");
    return 0;
}