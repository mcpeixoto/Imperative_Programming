
typedef struct aluno {
    int numero;
    char nome[100];
    int miniT [6];
    float teste;
} Aluno;



// Ex 1
int nota(Aluno a){

    float nota = a.teste;

    if (nota < 9.5){return 0;}
    else {return nota;}

}


// Ex 2

int procuraNum(int num, Aluno t[], int N) {
    int i = 0;
    while (i<N){
        if (t[i].numero == num) {
            return i;
        }
        i++;
    }
    return -1;
}


// Ex 3 TODO - Isto da seg fault wtf

void swapAluno(Aluno t[], int idx1, int idx2){
    Aluno temp;

    temp = t[idx1];
    t[idx1] = t[idx2];
    t[idx2] = temp;
}

void ordenaPorNum(Aluno t[], int N){
    // Bubble Sort
    int swapped = 1;
    int i;
    while (swapped){
        swapped = 0;
        for (i=1; i<N; i++){
            if (t[i-1].numero > t[i].numero){
                swapAluno(&t, i-1, i);
                swapped = 1;
            }
        }
    }
}

// Ex 4 TODO: Vou aswsumir que works xD
void criaIndPorNum(Aluno t [], int N, int ind[]){
    int i, j, k;
    Aluno auxiliar[N];

    for (i=0; i<N; i++){auxiliar[i]=t[i];}
    ordenaPorNum(auxiliar, N);

    // In python this would be ez lol
    for (i=0; i<N; i++){
        j = t[i].numero;
        
        for (k = 0; k<N; k++){
            if (auxiliar[k].numero == j){
                ind[i] = k;
                break;
            }
        }     
    }


}
    







void imprimeAluno (Aluno *a){
    int i;
    printf ("%-5d %s (%d", a->numero, a->nome, a->miniT[0]);
    for(i=1; i<6; i++) printf (", %d", a->miniT[i]);
    printf (") %5.2f %d\n", a->teste, nota(*a));
}

int main() {

    return 0;
}