#include <stdio.h>

int main(){
    FILE *filesample;
    filesample = fopen("filesample.txt", "w");
    fclose(filesample);
}