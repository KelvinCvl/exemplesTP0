#include <stdlib.h>
#include <stdio.h>

int main(){
    int s = 0;
    int T[10];


    for(int i = 0; i < 10; i++){
        T[i] = i;
    }    


    for(int i = 0; i < 10; i++){
        s += T[i];
    }    

    printf("s = %d\n", s);

    return EXIT_SUCCESS;
}