#include <stdlib.h>
#include <stdio.h>

int main(){
    int a = 0;
    for(int i = 0; i < 100; i++)
    {
        a+=3;
    }
    int* b = malloc(sizeof(int));
    for(int i = 0; i < 100; i++)
    {
       *b+=3;
    }
    printf("a=%d ; b=%d\n",a,*b);
    return EXIT_SUCCESS;
}