#include <stdio.h>

//printline function
void printline(){
    printf("-------------------------------\n");
}

int main(){

    //variable initialization
    int array[] = {1,2,3,5,6,7,8,9,0};
    int size = sizeof(array) / sizeof(array[0]);
    int newsize;
    int inel;
    int arin;
    
    //print array size
    printf("%i\n", size);

    //print each array index and element (using for loop) (traversing)
    for(int i = 0; i < size; i++){
    printf("Array[%i] = %i\n",i, array[i]);
    }

    printline();

    //input new array element
    printf("Insert new array element: ");
    scanf("%i", &inel);

    //enter array index to store new element
    printf("Enter array index: ");
    scanf("%i", &arin);

    newsize = size + 1;
    array[0] = array[newsize];
    
    //statement to push existing array index and element(make room for new element at an exact index)
    for (int k = size; k > arin; k--){
        array[k] = array[k-1];
    }
    
    //input/store new array index and element
    array[arin] = inel;
    

    printline();

    printf("%i\n", newsize);
    //print each array with new index and element
    for (int j = 0; j < newsize; j++){
        printf("Array[%i] = %i\n", j, array[j]);
    }

}