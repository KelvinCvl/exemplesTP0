#include <stdlib.h>
#include <stdio.h>

typedef struct structure struct_t;
struct structure{
    int a;
    float b;
};

struct_t* nouvelle_structure(){
    struct_t* S = malloc(sizeof(struct_t));
    S->a = 0;
    S->b = 0.0;
    return S;
}

void set_a(struct_t* S, int a){
    S->a = a;
}

void set_b(struct_t* S, float b){
    S->b = b;
}

void print_struct(struct_t S){
    printf("a=%d, b=%f\n", S.a, S.b);
}

int main(){
    struct_t* S = nouvelle_structure();
    set_a(S, 5);
    set_b(S, 2.4);
    print_struct(*S);
    
    return EXIT_SUCCESS;
}