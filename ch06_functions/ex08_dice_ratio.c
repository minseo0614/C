#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int n; 
    if (scanf("%d",&n)!=1 || n<=0) return 1;
    int cnt[7]={0};
    srand((unsigned)time(NULL));
    for (int i=0;i<n;i++){
        int v = rand()%6 + 1;
        cnt[v]++;
    }
    for (int face=1; face<=6; face++){
        printf("%.3f%c", cnt[face]/(double)n, face==6?'\n':' ');
    }
    return 0;
}
