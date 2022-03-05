#include <stdio.h>


void ex1(int dim) {

    for (int x = 0; x<dim; x++) {
        for (int y = 0; y<dim; y++) {
            printf("#");
        }
        printf("\n");
    }
}

void ex2(int dim) {
    int i = 1;

    for (int x = 0; x<dim; x++) {
        for (int y = 0; y<dim; y++) {
            if (i % 2 == 0) {
                printf("_");
            }
            else {
                printf("#");
            }
            i ++;
            
        }
        printf("\n");
    }
}

void ex3a(int dim) {
    int k = 1;
    for (int i = 0; i<dim; i++){
        for (int j = 0; j<k; j++) {
            printf("#");
        }
        printf("\n");
        k ++;
    }
    k -= 2;
    for (int i = 0; i<dim; i++){
        for (int j = 0; j<k; j++) {
            printf("#");
        }
        printf("\n");
        k --;
    }
    
}


void ex3b(int dim) {
    for (int layer=1; layer<(dim+1); layer++){
        for (int i=0; i<(dim-layer); i++) {
            printf(" ");
        }
        for (int i=0; i<(layer*2-1); i++) {
            printf("#");
        }
        printf("\n");
    }
}


void ex4(int raio) {
    printf("TODO");
}


int main() {
    ex3b(5);
    return 0;
}