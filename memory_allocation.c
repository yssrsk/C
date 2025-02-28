//allocate memory using calloc() to pointer name students with 20 values

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *students;
    int numofStudents = 12;

    students = calloc(numofStudents, sizeof(*students));
    printf("Memory allocation: %d", numofStudents * sizeof(*students));

}