#include <stdio.h>



// Ex 2
void swapM(int *x, int *y){
    //int x = 3, y=5;
    //swapM(&x, &y);
    //printf("%d %d\n", x, y);
    int tmp;
    tmp = *x;

    *x = *y;
    *y = tmp;
}

// Ex 3
void swap(int v[], int i, int j) {
    //int v[5] = {1,2,3,4,5};
    //int i = 2, j=3;
    //swap(v, i, j);
    //for (i=0; i<5; i++){
    //    printf("%d, ", v[i]);
    //}
    int tmp;

    tmp = *(v + i);

    v[i] = v[j];
    v[j] = tmp;
}

// Ex 4
int soma(int v[], int N){
    int tmp = 0;

    for (int i=0; i<N; i++){
        tmp += v[i];
    }
    return tmp;
}


// Ex 5
// a - Using swap
void inverteArray(int v[], int N){
    int j = N-1;
    for (int i=0; i<N/2; i++){
        swap(v, i, j);
        j--;
    }
}

// b - Using swapM
void inverteArray2(int v[], int N){
    int j = N-1;
    for (int i=0; i<N/2; i++){

        swapM( v + i, v + j);
        j--;
    }
}


// Ex 6
// TODOOOOO
int maximum(int v[], int N, int *m) {
    if (N < 1) {return 1;}

    *m = v[0];
    for (int i=1; i<N; i++){
        if (v[i] > *m){
            *m = v[i];
        }

    }
    return 0;
}

// Ex 7
void quadrados(int q[], int N){
    for (int i = 0; i<N; i++){
        q[i] = i * i;
    }
}

// TODO
void quadrados2(int q[], int N){
    int i;

    if (N>0){
        q[0] = 0;
        int x = 1;
        for (i=1; i<N; i++){
            q[i] = q[i-1] + x;
            x += 2;

        }
    }
}



// Ex 8

void pascal(int v[], int N){
    int n, k;
    for (n=0; n<N; n++){
        v[n] = 1;
        for (k=n-1; k>0; k--){
            v[k] = v[k] + v[k-1];
        }
        
        // print array
        for(k=0; k<=n; k++){
            printf("%d ", v[k]);
        }
        printf("\n");
    }

}



int main() {
    int v[8] = {0,0,0,0,0,0,0,0};

    pascal(v, 6);

    for (int i=0; i<6; i++){
        printf("%d, ", v[i]);
    }
    return 0;
}