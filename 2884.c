#include <stdio.h>
int main(){
    int H, M, total;
    scanf("%d%d", &H, &M);
    H = H*60;
    total = H+M;
    if (total<45){
        total = 45-total;
        int h,m;
        h = 23;
        m = 60-total;
        printf("%d %d", h, m);
    }
    else {
        total = total-45;
        int h,m;
        h = total/60;
        m = total%60;
        printf("%d %d", h, m);
    }
    return 0;
}