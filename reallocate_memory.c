//reallocate memory to a new variable

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *students, new_students, size;
    size = 20 * sizeof(*students);
    students = malloc(size);

    printf("Memory allocated to Students: %i at Memory address: %p\n", size, students);

    size = 25 * sizeof(*students);
    new_students = realloc(students, size);
    printf("Newly allocated memory to New Students: %i At Memory address: %p", size, new_students);
}