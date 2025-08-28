#include <stdio.h>

int is_leap(int y){
    return ( (y%4==0 && y%100!=0) || (y%400==0) );
}
int day_of_year(int y, int m, int d){
    int mdays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (is_leap(y)) mdays[1] = 29;
    int sum=0;
    for (int i=0;i<m-1;i++) sum += mdays[i];
    return sum + d;
}
const char* dow_name(int k){ // 0=일,1=월,...6=토
    static const char* name[7] = {"일","월","화","수","목","금","토"};
    return name[k%7];
}
// 1900-01-01이 월요일(=1)이라고 두고, 해당 날짜까지의 일수를 이용
int day_of_week(int y, int m, int d){
    int total = 0;
    for (int year=1900; year<y; year++) total += is_leap(year)?366:365;
    total += day_of_year(y,m,d) - 1;
    return (1 + total) % 7; // 0=일
}

int main(void){
    int y,m,d;
    while (1){
        if (scanf("%d %d %d",&y,&m,&d)!=3) return 1;
        if (y==0 && m==0 && d==0){ printf("안녕!\n"); break; }
        int k = day_of_week(y,m,d);
        printf("%s요일\n", dow_name(k));
    }
    return 0;
}
