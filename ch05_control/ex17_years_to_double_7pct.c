#include <stdio.h>

int main(void){
    double p = 10000000.0;
    double target = 20000000.0;
    int years = 0;
    while (p < target){
        p *= 1.07;
        years++;
    }
    printf("%d\n", years);
    return 0;
}
