#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* join(char* words[], int n) {
    char* result = (char*)malloc(sizeof(char) * 255); //выделяем доп. место под результат
    for(int i=0;i<n-1;i++){
        strcat(result, words[i]); //записываем в конец результата слово
        strcat(result, " "); //добавляем пробел
    }
    strcat(result, words[n-1]); //добавляем последнее слово(чтобы не было лишнего пробела)
    return result;
}

int main() {
    char* words[] = {"hello", "Ivan", "Gennadievich", "please", "five",};
    char* result = join(words, 5);
    printf("%s\n", result);
    return 0;
}