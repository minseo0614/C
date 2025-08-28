#include <stdio.h>

int is_leap(int y){
    return ( (y%4==0 && y%100!=0) || (y%400==0) );
}
int day_of_year(int y, int m, int d){
    int mdays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (is_leap(y)) mdays[1] = 29;
    int sum = 0;
    for (int i=0;i<m-1;i++) sum += mdays[i];
    return sum + d;
}
int main(void){
    int y,m,d;
    if (scanf("%d %d %d",&y,&m,&d)!=3) return 1;
    printf("%d\n", day_of_year(y,m,d));
    return 0;
}
