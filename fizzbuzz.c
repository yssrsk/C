#include <stdio.h>

int main(){
    int num;

    for (num = 1; num <= 100; num++){
        if(num % 15 ==0){
            printf("num %i = fizzbuzz\n", num);
        }
        else if (num % 3 == 0){
            printf("num %i = fizz\n", num);
        }
        else if(num % 5 == 0){
            printf("num %i = buzz\n", num);
        }
        else{
            printf("num %i\n", num);
        }
        
    }
}