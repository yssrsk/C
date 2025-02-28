#include <stdio.h>

void printline(){
    printf("----------------------------\n");
}

int main(){
    int mdarray[][5] = {{1,2,3,4,5},
                        {6,7,8,9,0}};
    int rowlength = sizeof(mdarray) / sizeof(mdarray[0]);
    int collength = sizeof(mdarray[0]) / sizeof(mdarray[0][0]);
    int length = sizeof(mdarray) / sizeof(mdarray[0][0]);

    printf("%i\n", rowlength);
    printf("%i\n", collength);
    printf("%i\n", length);
    printf("%i", mdarray[0][1]);
    printline();
    for (int i=0; i<rowlength; i++){
        for (int j=0; j<collength; j++){
            printf("%i\n", mdarray[i][j]);
        }
    }


}