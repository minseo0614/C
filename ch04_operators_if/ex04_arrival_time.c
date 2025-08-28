#include <stdio.h>
int main(void){
    int h,m,dH,dM; scanf("%d %d %d %d",&h,&m,&dH,&dM);
    int t=h*60+m+dH*60+dM;
    printf("%02d:%02d\n",(t/60)%24,t%60);
    return 0;
}
