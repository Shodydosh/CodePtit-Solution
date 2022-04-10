#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define ll long long
#define scan(n) scanf("%d", &n)
#define print(n) printf("%d ", n)
#define nhap(str) fgets(a, 100, stdin); a[strlen(str)] = 0;

int main(){
	int t, test = 1;
	scan(t);
	while(t--){
		int cao, rong;
		scanf("%d %d", &cao, &rong);
		
		int a[cao][rong];
		for(int i=0; i<cao; i++){
			for(int j=0; j<rong; j++){
				scan(a[i][j]);
			}
		}
		
		for(int i=0; i<cao; i++){
			for(int j=0; j<rong; j++){
				
				for(int x=i; x<cao; x++){
					for(int y=j; y<rong; y++){
						if(a[x][y] < a[i][j]){
							
							int temp = a[x][y];
							a[x][y] = a[i][j];
							a[i][j] = temp;
							
						}
					}
				}
				
			}
		}
		//
		printf("Test %d:\n", test);
		test++;
		for(int i=0; i<cao; i++){
			for(int j=0; j<rong; j++){
				print(a[i][j]);
			}
			printf("\n");
		}
	}
}

