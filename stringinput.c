#include <stdio.h>

int main(){
    char name[50] = {"JOHN UWU"};

    printf("Your name is: %s\n", name);
    printf("---------------------------\n");
    printf("Enter your new name: ");
    // input the name(new), scanf or fgets(preferred for strings with spaces)
    fgets(name, sizeof(name), stdin);
    printf("Your name is: %s", name);
}