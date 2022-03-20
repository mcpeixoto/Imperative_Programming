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



// TODO: 5
// Carlos
int mdc31(int a, int b) {
    int c;

    // Break case
    if (a==b) {
        return a;
        }

    if (a>b){
        c = a%b;
        return mdc31(c, b);
        }

    if (b>a){
        c = a%b;
        return mdc31(a, c);
        }

}


// Ex 6
// Recursive fibonacci
// Cost: O(2^n)
int fib1(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fib1(n-1) + fib1(n-2);
}


// Iterative
// Cost: O(n)
int fib2(int n) {
    int a = 0;
    int b = 1;
    int c;
    for (int i=0; i<n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}


int main() {

    printf("%d\n", mdc31(126, 45));
    return 0;
}