#include <stdio.h>

typedef struct lligada {
int valor;
struct lligada *prox;
} *LInt;


// Ex 1

int length(LInt l){
    int count = 0;

    while (l != NULL){
        count++;
        l = l->prox;
    }
    return count;
}

// Ex 4

LInt reverseL(LInt l){
    LInt new = NULL;
    LInt temp = NULL;

    while (l != NULL){
        temp = l->prox;
        l->prox = new;
        new = l;
        l = temp;
    }
    return new;

}


// Ex 5

void insertOrd(LInt *l, int x){
    LInt new = malloc(sizeof(struct lligada));
    new->valor = x;
    new->prox = NULL;

    if (*l == NULL){
        *l = new;
    }
    else{
        LInt temp = *l;
        while (temp->prox != NULL && temp->prox->valor < x){
            temp = temp->prox;
        }
        new->prox = temp->prox;
        temp->prox = new;
    }
}


// Ex 6

int removeOneOrd (LInt *l, int x){
    LInt ant;
    LInt pt = *l;

    while (pt != NULL && pt->valor < x){
        ant = pt;
        pt = pt->prox;
    }
    if (pt == NULL || pt->valor != x){
        return 1;
    }
    if (ant == NULL){
        *l = temp->prox;
    }
    ant->prox = pt->prox;
    free(pt);
    return 0;
}





