#include <stdio.h>
int main(void){
    int y,m,d; scanf("%2d%2d%2d",&y,&m,&d);
    if (y<=22) y+=2000; else y+=1900;
    printf("%d-%02d-%02d\n", y,m,d);
    return 0;
}
