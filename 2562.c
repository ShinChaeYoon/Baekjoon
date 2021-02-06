#include <stdio.h>
int main(){
    int num[9];
    for (int i=0; i<9; i++) {
        scanf("%d", &num[i]);
    }
    int max = 0;
    int ord;
    for (int i=0; i<9; i++) {
        if (max < num[i]) {
            max = num[i];
            ord = i+1;
        }
    }
    printf("%d\n%d", max, ord);
    return 0;
}