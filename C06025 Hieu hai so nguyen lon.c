#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define ll long long
#define scan(n) scanf("%d", &n)
#define print(n) printf("%d", n)
#define nhap(str) fgets(a, 100, stdin); a[strlen(str)] = 0;

int main(){
	int t;
	scan(t);
	while(t--){
		scanf("\n");
		char str1[505];
		char str2[505];
		// nhap
		fgets(str1, 500, stdin);
		str1[strlen(str1)-1] = '\0';
		fgets(str2, 500, stdin);
		str2[strlen(str2)-1] = '\0';
		
		// max dinh str1 > str2;
		if(strlen(str1) == strlen(str2)){
			if(strcmp(str2, str1) > 0){
				char tmp[505];
				strcpy(tmp, str1);
				strcpy(str1, str2);
				strcpy(str2, tmp);
			}
		}
		else{
			if(strlen(str2) > strlen(str1)){
				char tmp[505];
				strcpy(tmp, str1);
				strcpy(str1, str2);
				strcpy(str2, tmp);
			}
		}
		
		
		int a[505] = {};
		int b[505] = {};
		int k = 0;
		// chuyen qua dang int
		for(int i=strlen(str1)-1; i>=0; i--){
			a[k] = str1[i] - '0';
			k++;
		}
		int max = k;
		k=0;
		for(int i=strlen(str2)-1; i>=0; i--){ 
			b[k] = str2[i] - '0';
			k++;
		}
		if(max < k) max = k;
		
//		for(int i=0; i<max; i++){
//			printf("%d   %d\n", a[i], b[i]);
//		}
		
		int dif[505] = {};
		int nho = 0;
		for(int i=0; i<max; i++){
			dif[i] = a[i] - b[i] + nho;
			nho = 0;
			if(dif[i] < 0){
				nho = -1;
				dif[i] += 10;
			}
		}
		
		int check = 1;
		int check2 = 1;
		
		for(int i=max-1; i>=0; i--){
			if(check==1){
				if(dif[i] != 0){
					print(dif[i]);
					check = 0;
					check2= 0;
				}
			}
			else{
				print(dif[i]);	
				check2 = 0;
			} 		
		}
		
		if(check2) printf("0");
		
		printf("\n");
	}
}

