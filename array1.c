#include <stdio.h>

// printline function
void printline(){
    printf("-----------------------------\n");
}
// main function
int main(){
    // variable initialization
    int ages[] = {20, 20, 25, 21, 23, 22};
    int length = sizeof(ages) / sizeof(ages[0]);
    float sum, ave;

    // for loop to sum all ages in array
    for (int i = 0; i < length; i++){
        sum += ages[i];
    }

    ave = sum / length;

    printf("The average age is: %.2f", ave);
}