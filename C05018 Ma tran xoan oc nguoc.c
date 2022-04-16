#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define ll long long
#define scan(n) scanf("%d", &n)
#define print(n) printf("%d ", n)
#define nhap(str) fgets(a, 100, stdin); a[strlen(str)] = 0;

int main(){
	int t;
	scan(t);
	int test = 1;
	while(t--){
		int n;
		scan(n);
		int side = n;
		int k = 0;
		int mark = n*n;
		int a[n][n];

		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++)
				a[i][j]=0;
		}

		while(mark > 0){
			
			for(int i=k; i<side; i++)
				a[k][i] = mark--;
			
			for(int i=k+1; i<side; i++)
				a[i][side-1] = mark--;
			
			for(int i=side-2; i>=k; i--)
				a[side-1][i] = mark--;
			
			for(int i=side-2; i>k; i--)
				a[i][k] = mark--;
			

			side--;
			k++;
		}

		printf("Test %d:\n", test);

		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}

		test++;
	}
}