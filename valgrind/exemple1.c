&#include <stdlib.h>
#include <stdio.h>

int main(){
    int a = 0;
    for(int i = 0; i < 100; i++)
    {
        a+=3;
    }
    printf("a=%d\n",a);
    return EXIT_SUCCESS;
}