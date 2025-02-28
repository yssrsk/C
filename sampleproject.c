//create a sample program in c
//anything u want

//1.Calculator
//2. create a profile
//2.Display an array

#include <stdio.h>
#include <stdlib.h>

void printline(){
    printf("---------------------------\n");
}

float calcAddition(float num1, float num2){
    return num1 + num2;
}

float calcSubstraction(float num1, float num2){
    return num1 - num2;
}

float calcMultiplication(float num1, float num2){
    return num1 * num2;
}

float calcDivision(float num1, float num2){
    return num1 / num2;
}

void calculator(){
    float num1, num2;
    float ans;
    char opr, choice, again;

    printf("Welcome to Calculator\n");
    printf("1. Continue\n 2. Exit\n");
    scanf(" %c", &choice);
    if (choice == '1'){
    printline();
    do {
    printf("Enter first number: ");
    scanf(" %f", &num1);
    printf("Enter operator: ");
    scanf(" %c", &opr);
    printf("Enter second number: ");
    scanf("%f", &num2);
    switch(opr){
        case '+':
        ans = calcAddition(num1, num2);
        printf("The answer is: %.2f\n", ans);
        break;

        case '-':
        ans = calcSubstraction(num1, num2);
        printf("The answer is: %.2f\n", ans);
        break;
        
        case '*':
        ans = calcMultiplication(num1, num2);
        printf("The answer is: %.2f\n", ans);
        break;

        case '/':
        ans = calcDivision(num1, num2);
        printf("The answer is: %.2f\n", ans);
        break;

        default:
        printf("Invalid input!\n");
    };

        printf("Try again?: ");
        scanf(" %c", &again);

    } while(again == 'Y' || 'y');
    calculator();
} else if (choice == '2'){
    printline();
} else {
    printf("Invalid inpur!");
}
}

struct profile {
    char *fname;
    char *lname;
    char *sex;
    char *birthdate;
    int *age;
};

void createProfile(){
    struct profile profile1;

    profile1.fname = malloc(sizeof(char));
    profile1.lname = malloc(sizeof(char));
    profile1.sex = malloc(sizeof(char));
    profile1.birthdate = malloc(sizeof(char));
    profile1.age = malloc(sizeof(int));
    
    if (profile1.fname, profile1.lname, profile1.sex, profile1.birthdate, profile1.age == NULL){
        printf("Memory Allocation failed.\n");
        return 1;
    } else {
        printf("Memory allocation succesful.\n");
    }


    printf("Enter your first name: ");
    scanf("%s", &profile1.fname);
   

    printf(" %i Memory allocated at address %p\n ", sizeof(profile1.fname), &profile1.fname);

    printf("%s\n", &profile1.fname);

    
   

}

int main(){

    int choice;
    while (1){
    printf("Welcome to Sample Project in C\n");
    printf("1.Calculator\n2.Create A Profile\n");
    printf("Enter choice: ");
    scanf(" %c", &choice);
    if (choice == '1'){
        calculator();
        printline();
    } else if (choice == '2') {
        createProfile();
        printline();
    }
    
    else {
        break;
    }
}
}