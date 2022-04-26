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
    LInt ant = NULL;
    LInt pt = *l;

    while (pt != NULL && pt->valor < x){
        ant = pt;
        pt = pt->prox;
    }
    if (pt == NULL || pt->valor != x){
        return 1;
    }
    if (ant == NULL){
        ant = (*l)->prox;
        free(*l);
        *l = ant;

    } else {
        ant->prox = pt->prox;
        free(pt);
    }
    
    return 0;
}

// usar o sitio

int removeOneOrd (LInt *l, int x){
    LInt tmp;
    while((*l) != NULL && (*l)->valor < x){
        l = &((*l)->prox);
    }
    if ((*l) != NULL){
        tmp = (*l)->prox;
        free(*l);
        *l = tmp;
        return 0;
    } else return 1;

}

