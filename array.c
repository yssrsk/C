#include <stdio.h>

void printline(){
    printf("--------------------------------\n");
}

int main(){
    int nums[] = {1,2,3,4,5,6,7};
    int lenght = sizeof(nums) / sizeof(nums[0]);

    printf("Array size: %i\n", lenght);
    printline();
    for(int i = 0; i < lenght; i++){
        printf("Array[%i] = %i\n",i, nums[i]);
    }
    return 0;
}