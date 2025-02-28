#include <stdio.h>

int main (){
    int array[] = {45,40,50,35,55,60};
    int size = sizeof(array) / sizeof(array[0]);
    int in_ar, ar_in, newsize;

    for (int i = 0; i < size; i++){
    printf("Array[%i] = %i\n", i, array[i]);
    } 

    printf("Input element to Insert: ");
    scanf("%i", &in_ar);

    printf("Enter array index: ");
    scanf("%i", &ar_in);
    
    newsize = size + 1;
    array[0] = array[newsize];

    for (int j = size; j > ar_in; j--){
        array[j] = array[j - 1];
    }

    array[ar_in] = in_ar;
    
    for (int k = 0; k < newsize; k++){
        printf("Array[%i] = %i\n", k, array[k]);
        } 
    
}