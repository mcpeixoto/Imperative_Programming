#include <stdio.h>

#define Max 50


typedef struct staticStack {
    int sp;     // sp é o index do ultimo elemento inserido
    int values [Max];
    } STACK, *SStack; // Tem vários nomes - STACK é a estrutura, *SStack é o apontador para esta estrutura



// 1
// stack Last in first out

void SinitStack (SStack s) {
    s -> sp = 0;
}

int SisEmpty (SStack s){
    return s->sp==0;
}

int Stop (SStack s, int *x) {
    if (s->sp == 0){return 1;}
    
    *x = s->values[s->sp -1];
    return 0;
}

int Spop (SStack s, int *x) {
    if (s->sp == 0){return 1;}
    *x = s->values[--s->sp];
    return 0;
}


int Spush(SStack s, int x){
    if (s->sp >= Max){return 1;}
    s-> values[s->sp++] = x;
    return 0;

}






// Ex 2

// Queue first in first out
typedef struct staticQueue {
    int front;
    int length;
    int values [Max];
    } QUEUE, *SQueue;



void SinitQueue (SQueue q){
    q->front = q->length = 0;
}

int SisEmptyQ (SQueue q) {return q->length == 0;}

int Sfront (SQueue q, int *x){
    if (q->length == 0){return 1;}

    *x = q->values[q->front];
    return 0;
}

int Senqueue (SQueue s, int x){
    if (s->length >= Max){return 1;}
    // Poe sempre no fundo, quando enche tudo volta ao inicio.
    s->values[(s->front+s->length) % Max] = x;
    s->length++;
    return 0;
}


int Sdequeue (SQueue q, int *x){
    if (q->length == 0){return 1;}

    *x = q->values[q->front];
    q->front++;
    
    if (q->front >= Max){q->front = 0;}
    q->length--;
    
    return 0;
    }


// Ex 3

// size -> tamanho max
// length -> tamanho ja ocupado

typedef struct dinStack {
    int size; // guarda o tamanho do array values
    int sp;
    int *values;
    } *DStack;

typedef struct dinQueue {
    int size; // guarda o tamanho do array values
    int front;
    int length;
    int *values;
    } *DQueue;



void DinitQueue(DQueue q){
    q->front = q->length = 0;
    q->size = 16;
    q->values = malloc(16*sizeof(int));
}

int Denqueue(DQueue q, int x){
    if (q->length >= q->size){
        // Duplicar array
        int *new = malloc(2*q->size*sizeof(int));
        int i;
        for (i = 0; i<q->length; i++){
            new[i] = q->values[(q->front + i)%q->size];
        }

        free(q->values);
        q->values = new;
        q->size += 2;
        q->front = 0;
    }

    q->values[(q->front + q->length) % q->size] = x;
    q->length++;
    return 0;
}


