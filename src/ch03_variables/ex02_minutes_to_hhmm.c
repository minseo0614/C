#include <stdio.h>

int main(void){
    int n;
    if (scanf("%d", &n) != 1 || n < 0) return 1;
    int h = n / 60;
    int m = n % 60;
    printf("%d %d\n", h, m);
    return 0;
}
