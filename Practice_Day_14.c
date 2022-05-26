#include<stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char text[100];
    gets(text);
    char pattern[100];
    gets(pattern);

    char *cur = text;

    while(cur){
        char *pos = strstr(cur, pattern);
        if(pos == NULL) break;
        printf("Found at %d\n",pos - text);
        cur = pos+1;
    }

    return 0;
}
