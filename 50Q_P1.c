#include <stdio.h>

void ex1() {
    int r = 0;
    int m = 0;
    while (1) {
        scanf("%d", &r);
        if (r > m) {
            m = r;
        }
        if (r==0){
            break;
        }
    }
    printf("Biggest value in sec: %d\n", m);
}

void ex2() {
    int n, sum, r = 0; // Nº of points, sum of points, temp variable

    while (1) {
        scanf("%d", &r);
        
        // Break case
        if (r==0){
            break;
        }

        n ++;
        sum += r;
    }
    printf("Average of sequence is: %d\n", sum/n);

}


void ex3() {
    int first, second, r = 0;

    while (1) {
        scanf("%d", &r);

        if (r > first){
            second = first;
            first = r;
        }
        else if (r > second){
            second = r;
        }
        
        // Break case
        if (r==0){
            break;
        }
    }
    printf("Second biggest value is: %d\n", second);
}

// Ex 4
int bitsUm (unsigned int n) {
    int count = 0;
    while (n > 0) {
        if (n % 2 != 0) {
            count ++;
        }
        n /= 2;
    }
    return count;
}

// Ex 5
int trailingZ (unsigned int n) {
    int count = 0;
    while (n > 0) {
        if (n % 2 == 0) {
            count ++;
        }
        n /= 2;
    }
    return count;
}


// Ex 6
int qDig (unsigned int n) {
    int count = 0;
    while (n != 0) {
        n /= 10;
        count ++;
    }
    printf("%d\n", count);
    return count;
}

// Ex 7 TODO: check
char *strcat (char s1[], char s2[]){
    // Count how many chars
    int n = 0;
    for (int i=0; s1[i] != '\0'; n++, i++){}
    for (int i=0; s1[i] != '\0'; n++, i++){}

    char new_char[n];

    // Append to new_char
    n = 0;
    for (int i = 0; s1[i] != '\0'; n++, i++){
        new_char[n] = s1[i];
    }

    for (int i = 0; s2[i] != '\0'; n++, i++){
        new_char[n] = s2[i];
    }

    return new_char;
    
}


// Ex 8

char *strcpy (char *dest, char source[]){
    int i = 0;

    while (source[i] != '\0'){
        dest[i] = source[i];
    }
    dest[i] = '\0';

    return dest;
}


// Ex 9


// Ex 10
char strstr (char s1[], char s2[]){
    int j;
    int i = 0;
    while (s1[i] != '\0'){
        j = 0;
        while (s1[i+j] == s2[j] && s2[j] != '\0' && s1[i+j] != '\0'){
            j++;
        }
        if (s2[j] == '\0'){
            return i;
        }
        i++;
    }
    return -1;
}

// Ex 11


// Ex 12


// Ex 13


// Ex 14


// Ex 15


// Ex 16


// Ex 17


// Ex 18


// Ex 19


// Ex 20


// Ex 21


// Ex 22
int contida (char a[], char b[]){
    int i,j, c;
    i = 0;
    while (a[i]){
        j = 0;
        c = 0;
        while (b[j]){
            if (b[j] == a[i]){
                c = 1;
            }
            j++;
        }
        if (c != 0){
            return 0;
        }
        
        i ++;
    }
    return 1;
}

// Ex 23


// Ex 24

// TODO

// Ex 25
// TODOOOOOOOOOOOOOOOOOOOOOoo
int limpaEspacos (char t[]){

    int i, j;

    i = 0;
    while (t[i]){

        if (t[i] == " "){
            j = 1;
            while (t[i+j] != " "){
                j++;
            }
            t[i] = t[j];
        }

        i++;
    }
}



// Ex 26


// Ex 27


// Ex 28


// Ex 29


// Ex 30


// Ex 31
// Dei check
int get_freq(int elem, int v[], int N){
    // Retorna o nº ocorrencias do elemento no array v

    int n_ocorrencias = 0;

    for (int i=0; i<N; i++){
        if (v[i] == elem) {n_ocorrencias++;}
    }
    return n_ocorrencias;
}


int maisFreq (int v[], int N){
    int idx = 0;
    int nOcorr = get_freq(v[idx], v, N);

    for (int i=1; i<N; i++){
        if (get_freq(v[i], v, N) > nOcorr){
            nOcorr = get_freq(v[i], v, N);
            idx = i;
        }
    }

    return idx;
}

// Ex 32



// Ex 33


// Ex 34
int elimRepOrd (int v[], int N){
    int conta = 0;
    int auxiliar[N];

    for (int i=0; i<N; i++){
        while (v[i] == v[i+1]){i++;}
        auxiliar[conta] = v[conta];
        conta ++;
    }

    for (int i=0; i<conta; i++){
        v[i] = auxiliar[i];
    }

    return conta;
}

// Ex 35


// Ex 36

// TODO

int check_in_array(int elem, int v[], int N){
    for (int i=0; i<N; i++){
        if (v[i] == elem){return 1;}
    }
    return 0;
}


int comuns (int a[], int na, int b[], int nb){
    int waste[na];
    int n = 0;

    for (int i=0; i<na; i++){
        if (check_in_array(a[i], b, nb) && !check_in_array(a[i], waste, n)){
            waste[n] = a[i];
            n++;
        }
    }
    return n;
}


// Ex  37
// Mega ez

// Ex  38

// TODO
void somasAc(int v[], int Ac [], int N){
    Ac[0] = v[0];

    for (int i = 1; i<N; i++){
        Ac[i] = Ac[i-1] + v[i];
    }
}

// Ex  39

// TODO
int triSup (int N, float m [N][N]){

    for (int i=1; i<N; i++){
        for (int j=0; j<N-1; j++){
            if (m[i][j] != 0){
                return 0;
            }
        }
    }
    return 1;
}

// Ex  40
void transposta (int N, float m [N][N]){
    float transposta[N][N];

    for (int i=0; i<N; i++){
        for (int k=0; k<N; k++){
            transposta[k][i] = m[i][k];
        }
    }

    // Copy transposta back to m
    for (int i=0; i<N; i++){
        for (int k=0; k<N; k++){
            m[i][k] = transposta[i][k];
        }
    }

}


// Ex  41


// Ex  42


// Ex  43


// Ex  44


// Ex  45


// Ex  46


// Ex  47


// Ex  48



// Ex  49


// Ex  50

int main() {
    char s1[100] = "batota";
    char s2[100] = "tot";

    int v[10] = {1,1,2,2,2,2,3,3,4,4};
     
    printf("%d\n", elimRepOrd(v, 10));

    return 0;
}