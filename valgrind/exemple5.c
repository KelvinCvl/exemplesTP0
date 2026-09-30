#include <stdlib.h>
#include <stdio.h>

typedef struct tableau tableau_t;
struct tableau{
    int taille;
    float taille_max;
    int* T;
};

tableau_t* nouvelle_structure(int taille_max){
    tableau_t* S = malloc(sizeof(tableau_t));
    S->taille = 0;
    S->taille_max = taille_max;
    S->T = malloc(sizeof(int)*taille_max);
    for(int i = 0; i < S->taille_max; i++)
        S->T[i] = 0;
    return S;
}

int get_i(tableau_t S, int i){
    if(i < S.taille)
        return S.T[i];
}

void add(tableau_t* S, int val){
    if(S->taille < S->taille_max){
        S->T[S->taille] = val;
        S->taille++;
    }
}

void print_struct(tableau_t S){
    for(int i = 0; i < S.taille; i++)
        printf("T[%d] = %d\n", i, S.T[i]);
}

int main(){
    tableau_t* T = nouvelle_structure(5);
    add(T, 5);
    print_struct(*T);
    
    return EXIT_SUCCESS;
}