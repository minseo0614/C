#include <stdio.h>

int main(void){
    int kor[10];
    for (int i=0;i<10;i++) scanf("%d",&kor[i]);
    int cnt=0;
    for (int i=0;i<10;i++) if (kor[i]==0) cnt++;
    printf("%d\n", cnt);
    return 0;
}
