#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool ruleCheck(char str[]){
    bool check = true;
    if(str[0]>=97 && str[0]<=122){
        for(int i=1;i<strlen(str);i++){
            if(str[i]>=65 && str[i]<=90)
                check = true;
            else{
                check = false;
                break;
            }
        }
    }else{
        for(int i=0;i<strlen(str);i++){
            if(str[i]>=65 && str[i]<=90)
                check = true;
            else{
                check = false;
                break;
            }
        }
    }
    return check;
}

int main(){
    char str[101];
    scanf("%s",str);

    if(ruleCheck(str)){
        for(int i=0; i<strlen(str); i++){
            if(str[i]>=97 && str[i]<=122){
                str[i] = str[i] - 32;
            }else if(str[i]>=65 && str[i]<=90){
                str[i] = str[i] + 32;
            }
        }
    }
    printf("%s\n",str);
    return 0;
}
