#include <stdio.h>

int is_leap(int y){
    return ( (y%4==0 && y%100!=0) || (y%400==0) );
}
int days_in_year(int y){
    return is_leap(y) ? 366 : 365;
}
int main(void){
    int y; 
    if (scanf("%d",&y)!=1) return 1;
    printf("%d년에는 %d일이 있습니다\n", y, days_in_year(y));
    return 0;
}
