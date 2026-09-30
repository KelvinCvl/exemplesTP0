#include <stdlib.h>
#include <stdio.h>

int main(){
    int s = 0;
    int nb;
    int* T;


    for(int i = 0; i < 10; i++){
        T[i] = i;
    }    


    for(int i = 0; i < 10; i++){
        s += T[i];
    }    

    printf("moyenne = %f\n", s/(nb*1.0));

    return EXIT_SUCCESS;
}