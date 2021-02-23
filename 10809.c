#include <stdio.h>
int main(){
    char s[101];
    int Al[26] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int count[26] = {0};
    scanf("%s", s);
    for(int i=0; s[i]!='\0'; i++){
            if(s[i]=='a' && count[0]==0) {
                Al[0] += i+1;
                count[0]+=1;
            }
            if(s[i]=='b' && count[1]==0) {
                Al[1] += i+1;
                count[1]+=1;
            }
            if(s[i]=='c' && count[2]==0) {
                Al[2] += i+1;
                count[2]+=1;
            }
            if(s[i]=='d' && count[3]==0) {
                Al[3] += i+1;
                count[3]+=1;
            }
            if(s[i]=='e' && count[4]==0) {
                Al[4] += i+1;
                count[4]+=1;
            }
            if(s[i]=='f' && count[5]==0) {
                Al[5] += i+1;
                count[5]+=1;
            }
            if(s[i]=='g' && count[6]==0) {
                Al[6] += i+1;
                count[6]+=1;
            }
            if(s[i]=='h' && count[7]==0) {
                Al[7] += i+1;
                count[7]+=1;
            }
            if(s[i]=='i' && count[8]==0) {
                Al[8] += i+1;
                count[8]+=1;
            }
            if(s[i]=='j' && count[9]==0) {
                Al[9] += i+1;
                count[9]+=1;
            }
            if(s[i]=='k' && count[10]==0) {
                Al[10] += i+1;
                count[10]+=1;
            }
            if(s[i]=='l' && count[11]==0) {
                Al[11] += i+1;
                count[11]+=1;
            }
            if(s[i]=='m' && count[12]==0) {
                Al[12] += i+1;
                count[12]+=1;
            }
            if(s[i]=='n' && count[13]==0) {
                Al[13] += i+1;
                count[13]+=1;
            }
            if(s[i]=='o' && count[14]==0) {
                Al[14] += i+1;
                count[14]+=1;
            }
            if(s[i]=='p' && count[15]==0) {
                Al[15] += i+1;
                count[15]+=1;
            }
            if(s[i]=='q' && count[16]==0) {
                Al[16] += i+1;
                count[16]+=1;
            }
            if(s[i]=='r' && count[17]==0) {
                Al[17] += i+1;
                count[17]+=1;
            }
            if(s[i]=='s' && count[18]==0) {
                Al[18] += i+1;
                count[18]+=1;
            }
            if(s[i]=='t' && count[19]==0) {
                Al[19] += i+1;
                count[19]+=1;
            }
            if(s[i]=='u' && count[20]==0) {
                Al[20] += i+1;
                count[20]+=1;
            }
            if(s[i]=='v' && count[21]==0) {
                Al[21] += i+1;
                count[21]+=1;
            }
            if(s[i]=='w' && count[22]==0) {
                Al[22] += i+1;
                count[22]+=1;
            }
            if(s[i]=='x' && count[23]==0) {
                Al[23] += i+1;
                count[23]+=1;
            }
            if(s[i]=='y' && count[24]==0) {
                Al[24] += i+1;
                count[24]+=1;
            }
            if(s[i]=='z' && count[25]==0) {
                Al[25] += i+1;
                count[25]+=1;
            }
        }  
    for(int i=0; i<26; i++){
        printf("%d ", Al[i]);
    }
}