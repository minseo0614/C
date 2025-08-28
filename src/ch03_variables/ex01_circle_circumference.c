#include <stdio.h>
#define PI 3.14159265358979323846

int main(void){
    double r;
    if (scanf("%lf", &r) != 1 || r < 0) return 1;
    double c = 2.0 * PI * r;
    printf("%.2f\n", c);
    return 0;
}
