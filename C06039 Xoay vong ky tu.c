#include<stdio.h>
#include<string.h>

void transfer(char str[100]){

    char temp = str[0];

    for(int i = 0; i < strlen(str) - 1; i++){
        str[i] = str[i + 1];
    }
    str[strlen(str) - 1] = temp;
}

void solve(char str[100][100], int n){

    char strArr[100][100];

    for(int i = 0; i < strlen(str[0]); i++){
        strcpy(strArr[i], str[0]);
        transfer(str[0]);
    }

    int arr[100];
    int count = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < strlen(str[0]); j++){
            if(strcmp(str[i], strArr[j]) == 0){
                arr[count] = j;
                count++;
                break;
            }
        }
    }

    if(count < n){
        printf("-1");
        return;
    }

    int standard = arr[0];
    int move = 0;
    int minMove = 0;

    for(int i = 0; i < count; i++){
        if(arr[i] > standard){
            minMove += strlen(str[0]) + standard - arr[i];
        }else if(arr[i] == standard){
            continue;
        }else{
            minMove += standard - arr[i];
        }
    }

    if(minMove == 0){
        printf("0");
        return;
    }

    for(int i = 1; i < count; i++){
        standard = arr[i];
        for(int j = 0; j < count; j++){
            if(arr[j] > standard){
                move += strlen(str[0]) + standard - arr[j];
            }else if(arr[j] == standard){
                continue;
            }
            else{
                move += standard - arr[j];
            }
        }

        if(move == 0){
            printf("0");
            return;
        }
        if(move < minMove){
            minMove = move;
        }
        move = 0;
    }

    printf("%d", minMove);

}

int main(){

    int k;
    scanf("%d", &k);

    char str[100][100];

    for(int i = 0; i < k; i++){
        scanf("%s", &str[i]);
    }

    solve(str, k);

    return 0;
}
