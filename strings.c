#include <stdio.h>
#include <string.h>

void printline(){
    printf("----------------------------\n");
}

int main(){
    //get lenght of string
    char name[50] = "SANAKE MINATOZIRSKI";
    printf("%d", strlen(name));

    printline();
    //concatenate string
    char name1[] = "SANA ";
    char name2[] = "MEOWSKI";

    strcat(name1, name2);

    printf("%s", name1);

    return 0;
}   