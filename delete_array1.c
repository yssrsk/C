#include <stdio.h>

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,0};
    int size = sizeof(array) / sizeof(array[0]);
    int del_el, del_in, newsize;f

    for (int i = 0; i < size; i++){
    printf("Array[%i] = %i\n", i, array[i]);
    }

    printf("Enter element to delete: ");
    scanf("%i", &array[del_el]);
    
    for (int i = 0; i < size; i++) {
        if (array[i] == del_el) {
            for (int j = i; j < size - 1; j++) {
                array[j] = array[j + 1];
        }
        size--;
    }
}


    for (int i = 0; i < size; i++){
    printf("New Array[%i] = %i\n", i, array[i]);
    }

}