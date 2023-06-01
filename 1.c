#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d); 
    for (int i = a + (c + d - a % c) % d; i <= b; i+=d) { //увеличиваем а%d = ? до a%d = c
        printf("%d ", i);
    }
    return 0;
}