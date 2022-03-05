#include <stdio.h>

// Alguma coisa ta mal no ex1/ex2

float ex1(int n, float m){
    float r;
    int count;
    r = 0;

    for (int k=0; k<n; k++){
        r = r + m; count++;
    }

    printf("Contei %d operações\n", count);
    return r;
}


float ex2(int n, float f){
    float r;
    int count;
    while (n > 0) {
        if (n % 2 != 0) {
            r += f;
            count ++;
        }   
        
        f *= 2; count++;
        n /= 2;
        }
    printf("Contei %d operações\n", count);
    
    return f;
}
// Da gabi, works
float ex2g(int n, float f){
    float r;
    r=0;
    int i;
    for (i=n; i>0; i/=2){
        if (i%2!=0){
            r += f;
        }
        f = f*2;
    }
    return r;
}

// Uma cena gira de C: A<B?C:D
// A<B é uma condição; acontece C se verdade; D otherwise
#define MIN(A, B) (A < B ? A : B)

// Ex 3
int mdc1(int a, int b){
    int d;
    d = MIN(a, b);

    while (d > 0 && !(a%d==0 && b%d==0)){
        d--;
    }

    return d;
}


// Ex 4
int mdc2(int a, int b){
    // Break case
    if (a==b) {
        return a;
        }

    if (a>b){
        return mdc2(a-b, b);
        }

    if (b>a){
        return mdc2(a, b-a);
        }

}


int main() {
    float m;
    m = mdc2(81, 423);
    printf("%f\n", m);
    return 0;
}