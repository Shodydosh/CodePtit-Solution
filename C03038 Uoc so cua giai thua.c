#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, p;
		scanf("%d %d", &n, &p);
		int temp = 1;
		int res = 0;
		int tmp;
		while(temp*p <= n){
			tmp = temp * p;
			while(tmp % p == 0){
				res ++;
				tmp /= p;
			}
			temp++;
		}
		printf("%d\n", res);
	}
	return 0;
}

