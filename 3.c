#include <stdio.h>

int num_phib(int num) { //задаем первый и второй элемент последовательности
 int arr[num+1];
 arr[1] = 1;
 arr[2] = 1;
 for (int i = 3; i<num+1; i++) { 
    arr[i] = arr[i-1] + arr[i-2]; // высчитываем каждый следующий элемент 
 }
 return arr[num];
}

int main () {
    printf("%d", num_phib(6));
    return 0;
}