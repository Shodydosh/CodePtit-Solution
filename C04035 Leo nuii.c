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
	int sum1=0, sum2=0, min1=10000, min2=10000;
	scan(t);
	while(t--){
		int a, b;
		scanf("%d %d", &a, &b);
		if(min1 > a) min1 = a;
		if(min2 > b) min2 = b;
		sum1 += a;
		sum2 += b;
	}

	int res;
	if(sum1 > sum2) res = sum1 + min2;
	else res = sum2 + min1;

	printf("%d", res);
}

