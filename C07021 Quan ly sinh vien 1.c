#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define ll long long
#define scan(n) scanf("%d", &n)
#define print(n) printf("%lf\n", n)

typedef struct{
    char name[50];
    double m1, m2, m3, sum;
    int stt;
} sinhVien;

void swap(sinhVien *a, sinhVien *b){
    sinhVien temp;
    temp = *a; 
    *a = *b;
    *b = temp;
}

int main(){
    int selection;
    sinhVien sv[10000];
    int k = 0;
    int fix[10000];
    int fixIndex = 0;

    while(1){
        //printf("<nhap selection:>\n");
        scanf("%d", &selection);

        if(selection == 1){
            int n;
            scan(n);
            // printf("%d\n", n);


            for(int i=0; i<n; i++){
                sv[k].stt = k+1;
                scanf("\n");
                gets(sv[k].name);
                scanf("%lf %lf %lf", &sv[k].m1, &sv[k].m2, &sv[k].m3);
                
                sv[k].sum = sv[k].m1 + sv[k].m2 + sv[k].m3;
                
                k++;
            }

            // for(int i=0; i<n; i++){
            //     sv[i].sum = sv[i].m1 + sv[i].m2 + sv[i].m3;
            //     printf("<%lf>", sv[i].sum);
            // }
            
            continue;
        }
        else if(selection == 2){
            char temp[50];
            double tmp1, tmp2, tmp3;
            int index;
            //printf("check!\n");
            scan(index);
            fix[fixIndex] = index;
            fixIndex++;
            // printf("%d\n", index);
            scanf("\n");

            gets(temp);
            scanf("%lf %lf %lf", &tmp1, &tmp2, &tmp3);
            //printf("<%s %lf %lf %lf>\n", temp, tmp1, tmp2, tmp3);

            strcpy(sv[index-1].name, temp);
            sv[index-1].m1 = tmp1;
            sv[index-1].m2 = tmp2;
            sv[index-1].m3 = tmp3;
            sv[index-1].stt = index;
            sv[index-1].sum = tmp1 + tmp2 + tmp3;
            //printf("<%lf %lf %lf %lf>\n", sv[index-1].sum, sv[index-1].m1, sv[index-1].m2, sv[index-1].m3);
        }
        else if(selection == 3){

            printf("%d\n", k);

            for(int i=0; i<fixIndex; i++){
                printf("%d\n", fix[i]);
            }

            for(int i=0; i<k-1; i++){
                for(int j=i+1; j<k; j++){
                    if(sv[i].sum > sv[j].sum){
                        swap(&sv[i], &sv[j]);
                    }
                }
            }

            for(int i=0; i<k; i++){
                printf("%d %s %.1lf %.1lf %.1lf\n", sv[i].stt, sv[i].name, sv[i].m1, sv[i].m2, sv[i].m3);
            }
            break;

        }
    }
    return 0;
}