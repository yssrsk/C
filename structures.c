#include <stdio.h>
#include <string.h>

void printline(){
    printf("----------------------------------\n");
}

struct cars{
    char brand[50];
    char model[50];
    int year;
    char engine[50];
};

int main(){
    //initialize struct in main function
    struct cars car;
    struct cars car1;
    //if struct values are inserted in initialization, no need to use strcpy for the string values
    struct cars car2 = {"BMW", "M5 CS", 2021, "TT v8"};

    //use strcpy to assign string values(cannot assign string value normally)
    strcpy(car.brand, "BMW");
    strcpy(car.model, "e46 M3 GTR");
    car.year = 2001;
    strcpy(car.engine, "4.4l NA v8");

    strcpy(car1.brand, "Koenigsegg");
    strcpy(car1.model, "Agera RS");
    car1.year = 2015;
    strcpy(car1.engine, "TT v8");

    printf("Car no.1:\n Brand: %s\n Model: %s\n Year: %i\n Engine: %s\n", car.brand, car.model, car.year, car.engine);
    printline();
    printf("Car no.2:\n Brand: %s\n Model: %s\n Year: %i\n Engine: %s\n", car1.brand, car1.model, car1.year, car1.engine);
    printline();
    printf("Car no.3:\n Brand: %s\n Model: %s\n Year: %i\n Engine: %s", car2.brand, car2.model, car2.year, car2.engine);
}
