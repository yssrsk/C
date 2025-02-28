#include <stdio.h>
#include <stdbool.h>

int main(){
    int day = 29;
    const char name[] ="sana";
    bool healthy = false;
    double price = 69.69;
    
    printf("Name: %s\n", name);
    printf("Day: %d\n", day);
    printf("Is programming healthy?: \n");
    if (healthy == true){
        printf("No. Programming is not healthy. \n");
    }   else {
        printf("Don't you fucking lie to me!\n");
    }
    printf("Price: .%.2lf", price);
    return 0;


}