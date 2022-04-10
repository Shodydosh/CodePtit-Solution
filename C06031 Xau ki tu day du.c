#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define ll long long
#define scan(n) scanf("%d", &n)
#define print(n) printf("%d", n)

int main(){
    char s[50];
    scanf("%s", s);
    
    int len[50] = {};

    for(int i=0; i<strlen(s); i++){
        int max = 0;

        for(int j=0; j<i; j++){
            if(s[j] < s[i]){
                if(max < len[j]){
                    max = len[j];
                }
            }
        }

        len[i] = max+1;
    }

    int max = 0;
    for(int i=0; i<strlen(s); i++){
        if(max < len[i]) max = len[i];
    }

    printf("%d", 26-max);
}