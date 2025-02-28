#include <stdio.h>

void printline(){
    printf("----------------------------------\n");
}

float addition(float num1, float num2){
    return num1 + num2;
}

float substraction(float num1, float num2){
    return num1 - num2;
}

float multiplication(float num1, float num2){
    return num1 *  num2;
}

float division(float num1, float num2){
    return num1 / num2;
}

int main(){
    float num1, num2, ans;
    int choice;
    char opr;

    printf("Welcome to Basic C Calculator \n");
    printf("Enter Choice: \n 1. Try Calculator \n 2. Exit \n");
    scanf(" %i", &choice);
    while (choice == 1){
    printf("Insert first number: \n");
    scanf("%f", &num1);
    printf("Insert operator (+,-,*,/):\n");
    scanf(" %c", &opr);
    printf("Insert second number: \n");
    scanf("%f", &num2);

    switch (opr){
        case '+':
        ans = addition(num1, num2);
        printf("The answer is: %f", ans);
        break;

        case '-':
        ans = substraction(num1, num2);
        printf("The answer is: %f", ans);
        break;

        case '*':
        ans = multiplication(num1, num2);
        printf("The answer is: %f", ans);
        break;

        case '/':
        ans = division(num1, num2);
        printf("The answer is: %f", ans);
        break;

        default:
            printf("Invalid Input!");
    }
    printf("Enter Choice: \n 1. Try Again \n 2. Exit \n");
    scanf(" %i", &choice);
}

    return 0;
}