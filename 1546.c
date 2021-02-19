#include <stdio.h>
int main(){
    int N;
    double total = 0;
    int max = 0;
    scanf("%d", &N);
    int Arr[N] = {0};
    for (int i=0; i<N; i++) scanf("%d", &Arr[i]);
    for (int j=0; j<N; j++) {
        if (max < Arr[j]) max = Arr[j];
    }
    for (int k=0; k<N; k++) {
        total += (double)Arr[k]/(double)max*(double)100;
    }
    printf("%f", (double)total/(double)N);
}