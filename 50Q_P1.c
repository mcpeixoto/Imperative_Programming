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

// Ex 7



int main() {
    qDig(440);
    return 0;
}