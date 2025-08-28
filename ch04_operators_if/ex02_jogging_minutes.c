#include <stdio.h>
int main(void){
    int sh,sm,eh,em; scanf("%d %d %d %d",&sh,&sm,&eh,&em);
    int start=sh*60+sm, end=eh*60+em;
    printf("%d\n", end-start);
    return 0;
}
