#include <stdio.h>
// Strings

int contaVogais(char *s){
    int i=0;
    int contar = 0;
    while (s[i] != '\0'){
        char elem = s[i];

        if (elem == 'a' || elem == 'e' || elem == 'i' || elem == 'o' || elem == 'u'){
            contar++;
        }
        i++;
    }
    return contar;
}

// ta com random problemas idk
int retiraVogaisRep(char *s){
    int contar = 0;
    char resultado[100];
    char last_char;

    int i = 1;
    resultado[0] = s[0];
    
    while (s[i]){

        last_char = s[i-1];
        
        if (last_char == s[i]){
            i++;
            continue;
        }
        else {resultado[++contar] = s[i];}
        i++;

    
    }
    resultado[contar] = '\0';

    // Copy to the original array
    i = 0;
    while (resultado[i]){
        s[i] = resultado[i];
        i++;
    }
    s[i] = '\0';
    return contar;
}

void retiraVogaisRep2(char *s){
    // i le a frase
    // j constroi a frase limpa sem vogais repetidas
    int i = 0;
    int j = 0;
    while (s[i]){
        if (s[i] == s[i+1]){
            i++;
            continue;
        }
        else {
            s[j] = s[i];
            j++;
        }
        i++;
    }
    s[j] = '\0';
}

// Ex 3
int isVogal(char elem){
    if (elem == 'a' || elem == 'e' || elem == 'i' || elem == 'o' || elem == 'u'){
        return 1;
    }
    return 0;
}

int duplicaVogais(char *s){
    int i = 0;
    int j = 0;
    char resultado[100];

    while (s[i]){
        resultado[j] = s[i];
        if (isVogal(s[i])) {
            resultado[j+1] = s[i];
            j++;
        }
        
        i++;
        j++;
    }
    i = 0;
    while (resultado[i]){
        s[i] = resultado[i];
        i++;
    }
    s[i] = '\0';

    return 0;
    
}

int duplicaVogais2(char *s){
0
     
}



// Arrays
int ordenado(int v[], int N){
    int r=1, i;
    // 0 é falso, anything else is True

    for (i=1; r && i<N; i++){
        r = r && (v[i] >= v[i-1]);            
    }
    return r;    

}


int merge(int a[], int na, int b[], int nb, int r[]){
    int ia=0, ib=0;

    while (ia < na && ib < nb){
        // por b em r
        if (a[ia] > b[ib]) {
            r[ia+ib] = b[ib];
            ib++;
        }
        else {
            r[ia+ib] = a[ia];
            ia++;
        }
    }
    // This means we ended one of the lists
    while (ia<na){
         r[ia+ib] = a[ia];
         ia++;
    }
    while (ib<nb){
         r[ia+ib] = b[ib];
         ib++;
    }
}



int main() {
    char v[100] = "Esta e uma string com duplicados";
    int i;
    duplicaVogais(v);
    //printf("%d", i);

    printf("%s", v);

    return 0;
}