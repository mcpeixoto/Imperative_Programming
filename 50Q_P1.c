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



int main() {
    ex3();
    return 0;
}