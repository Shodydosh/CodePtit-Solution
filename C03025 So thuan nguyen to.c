#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define ll long long
#define scan(n) scanf("%d", &n)
#define print(n) printf("%d", n)
#define nhap(str) fgets(a, 100, stdin); a[strlen(str)] = 0;

int checkNT(int n){
	if(n<2) return 0;
	else{
		for(int i=2; i<=sqrt(n); i++){
			if(n%i==0){
				return 0;
			}
		}
	}
	return 1;
}

int check(int n){
	int temp = n;
	int sum = 0;
	while(temp > 0){
		if(checkNT(temp % 10) == 0){
			return 0;
		}
		else{
			sum += temp%10;
			temp /= 10;
		}
	}
	if(checkNT(sum)) return 1;
	else return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		
		int a, b;
		scanf("%d %d", &a, &b);
		
		int prime[b+1];
		int count = 0;
		
		for(int i=2; i<=b; i++) prime[i] = 1;
		
		for(int i=2; i<=b; i++){
			if(prime[i] == 1){
				for(int j = 2*i; j<=b; j+=i){
					prime[j] = 0;
				}
			}
		}
		
		for(int i=a; i<=b; i++){
			if(prime[i] == 1){
				if(check(i)==1) count++;
			}	
		}
		printf("%d\n", count);
	}
}
