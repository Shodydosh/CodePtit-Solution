#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define ll long long
#define scan(n) scanf("%d", &n)
#define print(n) printf("%d", n)
#define nhap(str) fgets(a, 100, stdin); a[strlen(str)-1] = '\0';

int main(){
	int t;
	scan(t);
	while(t--){
		int rong, cao;
		scanf("%d%d", &cao, &rong);
		
		char a[cao][rong];
		
		for(int i=0; i<cao; i++){
			scanf("\n");
			for(int j=0; j<rong; j++){
				scanf("%c", &a[i][j]);
			}
		}
		
		ll count = 0;
		ll temp1=0, temp2=0;
		
		for(int i=0; i<cao; i++){
			for(int j=0; j<rong; j++){

				if(a[i][j] == '0') continue;

				for(int k=0; k<rong; k++){
					if(a[i][j] == '1' && a[i][k] == '2') temp1++;
					if(a[i][j] == '2' && a[i][k] == '1') temp1++;
				}

				for(int k=0; k<cao; k++){
					if(a[i][j] == '1' && a[k][j] == '2') temp2++;
					if(a[i][j] == '2' && a[k][j] == '1') temp2++;
				}

				count += temp1*temp2;
				temp1=0;
				temp2=0;

			}
		}
		
		printf("%lld\n", count);
	}
}
