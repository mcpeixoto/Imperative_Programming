#include <stdio.h>


// Vamos começar pelos triangulos



void n_char (int n, char c) {

    for (int i=0; i<n; i++){
        putchar(c);
    }

}


void triV(int n) {
    int c;
    c = n-1;
    
    for (int i=0; i<n; i++){
        n_char(c, ' ');
        n_char(2*i-1, '#');
        printf("\n");
        c--;
    }
}

void triH(int n) {
    int c;
    c = n-1;
    
    for (int i=1; i<n; i++){
        n_char(i, '#');
        printf("\n");
    }
    for (int i=n; i>0; i--){
        n_char(i, '#');
        printf("\n");
    }
}



void circulo(int n){
    int c;
    c = n-1;
    
    for (int i=0; i<n; i++){
        n_char(c, ' ');
        n_char(2*i-1, '#');
        printf("\n");
        c--;
    }
    c = 1;
    for (int i=n-2; i>0; i--){
        n_char(c, ' ');
        n_char(2*i-1, '#');
        printf("\n");
        c++;
    }
}

// By stor
void circulos(int r){
    // x^2 + y^2 <= r^2

    for (int x=-r; x<=r; x++){
        for (int y=-r; y<=r; y++){
            if (x*x + y*y <= r*r) {
                printf("##");
            }
            else {printf("  ");}
        }
        printf("\n");

    }
}


void main() {
    circulos(10);
}