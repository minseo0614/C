#include <stdio.h>

int main(void){
    int money;
    if (scanf("%d", &money) != 1 || money < 0 || money >= 1000) return 1;
    int c100 = money / 100;
    int c10  = (money % 100) / 10;
    int c1   = money % 10;
    printf("%d %d %d\n", c100, c10, c1);
    return 0;
}
