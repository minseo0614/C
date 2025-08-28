#include <stdio.h>
#include <math.h>

double rad2deg(double rad){
    return rad * 180.0 / 3.14159265;
}

int main(void){
    double base, height;
    if (scanf("%lf %lf",&base,&height)!=2) return 1;

    double theta = atan(height / base);   // radian
    double degree = rad2deg(theta);

    printf("%.2f\n", degree);
    return 0;
}
