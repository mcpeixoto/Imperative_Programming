

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
    int a[10] 
    return 0;
}