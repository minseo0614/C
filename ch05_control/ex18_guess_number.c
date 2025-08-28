#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand((unsigned)time(NULL));
    int secret = rand()%101;
    for (int i=0;i<5;i++){
        int g; if (scanf("%d",&g)!=1) return 1;
        if (g==secret){ printf("정답입니다\n"); return 0; }
        if (g>secret)  printf("그보다 작은 수를 입력하시오\n");
        else           printf("그보다 큰 수를 입력하시오\n");
    }
    return 0;
}
