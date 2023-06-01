#include <stdio.h>
int ispolnitel(int num) {
   int first = num / 100;
   int second = (num % 100) / 10;
   int third = num % 10;
   int first_second = first * second;
   int second_third = second * third; // находим числа, произведения 
   
    if (first_second < second_third) { // в first_second должно лежать большее значение
        int temp = first_second; 
        first_second = second_third;
        second_third = temp;
    }
    if (first_second > 9) { // first_second нужно сместить либо на один разряд ибо на два влево, в зависимости от числа
        return (first_second * 100 + second_third); 
    } else {
        return (first_second * 10 + second_third);
    }
}

int main () {
    printf("%d", ispolnitel(345));
}