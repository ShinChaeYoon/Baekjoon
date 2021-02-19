#include <stdio.h>
int main(){
    int t,ans;
    char s[80];
    scanf("%d", &t);
    while (t--){
        scanf("%s", s);
        int cnt = 0;
        ans = 0;
        for(int i=0; s[i] != '\0'; i++){
            if(s[i] == 'O'){
                cnt ++;
                ans += cnt;
            }
            else{
                cnt = 0;
            }
        }
        printf("%d\n", ans);
    }
}