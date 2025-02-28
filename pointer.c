#include <stdio.h>

void printline(){
    printf("--------------------------\n");
}

int main(){
    int nums[] = {1,2,3,4,5};
    int length = sizeof(nums) / sizeof(nums[0]);
    // get the memory address of the elements inside array nums
    printf("Array length: %i\n", length);
    for (int i; i<length; i++){
        printf("Memory address: %p\n", &nums[i]);
    }
    printline();

    //get the element values inside array
    for (int i; i < length; i++){
        printf("Array nums[%i] = %i Memory Address: %p\n", i, *(nums + i), &nums[i]);
    }
}