#include <stdio.h>

typedef struct celula {
    char *palavra;
    int ocorr;
    struct celula *prox;
    } * Palavras;

void libertaLista(Palavras l){
    Palavras aux=l;
    while(aux!=NULL){
        Palavras tmp = aux->prox;
        free(aux);
        aux = tmp;
    }
}




int quantasP(Palavras l){
    int count = 0;
    while(l!=NULL){
        l = l->prox;
        count ++;
    }
    return count;
}



void acrescentaInicio(Palavras *lptr, char *p){
    Palavras nova=malloc(sizeof(struct celula));
    nova->palavra = X;
    nova->ocorr=1;
    nova->prox = l;
    nova->prox = *lptr
    *lptr=nova;
    return nova;
}



void listaPal(Palavras l){
    while (l!=NULL){
        printf("%s:%d\n", l->palavra, l->ocorr);
        l = l->prox;
    }
}


char *ultima(Palavras l){
    if (l==NULL){return NULL;}
    while(l->prox!=NULL){l=l->prox;}
    return l->palavra;
}


Palavras acrescentaFim(Palavras l, char *p){

    Palavras nova = malloc(sizeof(struct celula));
    nova -> palavra = p;
    nova->ocorr=1;
    nova->prox = NULL;

    if (l==NULL){return nova;}

    while(l->prox!=NULL){
        l=l->prox;
    }
    l->prox = nova;
    return l;
}


Palavras acescentaCentro(Palavras l, char *p){
    Palavras aux, nova;
    if (l==NULL || strcmp(l->palavra, p)>0){
        return acrescentaInicio(l, p);
    }
    if (strcmp(l->palavra, p)==0){
        l->ocorr++;
    }else{
        for (aux=l; aux->prox!=NULL && strcmp(aux->prox->palavra, p)<0; aux=aux->prox){
            if (aux->prox == NULL || strcmp(aux->prox->palavra, p)>0){
                aux->prox = acrescentaInicio(aux->prox, p);
            }else{aux->prox->ocorr++;}
        }
    }
    return l;
}


struct celula* maisfreq(Palavras){
    struct celula *mea=NULL;
    int maxp = 0;
    while (l!=NULL){
        if (l->ocorr>maxp){max=l; maxp=l->ocorr;}
        l=l->prox
    }
    return maxp;
}