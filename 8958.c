#include <stdio.h>
int main(){
    int N;
    int count = 0;
    char str[80] = {0};
    int j = 0;
    scanf("%d", &N);
    for(int i=0; i<N; i++) {
        scanf("%s\n", str);
        while (str[j]!='\0'){
            if (str[j]=='O') count += 1;
            j+=1;
        }
        printf("%d\n", count);
    }
}