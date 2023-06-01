#include <stdio.h>
int sumDigits(int *num) {
    int a = *num; //приравниваем указатель к переменную
    int sum=0;
    while(a>0) { 
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

int main() {
    int m = 1234;
    printf("%d", sumDigits(&m));
}