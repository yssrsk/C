//check if the memory allocation is successful
//allocate 4 bytes to mem1 and realloc 8 bytes to mem2 from mem1
//if successful, print the memory realloc to mem2, else print not successful

#include <stdio.h>
#include <stdlib.h>

int main(){
    //initialize variable
    int *mem1, *mem2;

    mem1 = malloc(4);

    mem2 = realloc(mem1, 8);

    if (mem2 == NULL){
        printf("Memory reallocation failed");
    } else {
        printf("Memory reallocation successful. %p memory reallocated to %p", mem2, mem2);
        mem1 = mem2;
    }

}