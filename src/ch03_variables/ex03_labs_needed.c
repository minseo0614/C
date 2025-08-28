#include <stdio.h>
#define SIZE 30

int main(void){
    int n;
    if (scanf("%d", &n) != 1 || n < 0) return 1;
    int rooms = (n + SIZE - 1) / SIZE; // 올림 나눗셈
    if (rooms == 0) rooms = 1;
    printf("%d\n", rooms);
    return 0;
}
