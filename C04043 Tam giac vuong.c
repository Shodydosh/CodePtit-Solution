#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define ll long long
#define scan(n) scanf("%d", &n)
#define print(n) printf("%d ", n)
#define nhap(str) fgets(a, 100, stdin); a[strlen(str)] = 0;

void check(long long a[], long long n){
	//
	for(long long i=0; i<n-1; i++){
		for(long long j=i+1; j<n; j++){
			if(a[i] > a[j]){
				long long temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	//
	long long ptr1, ptr2, target;
	long long pos1, pos2;
	
	for(long long i=n-1; i>=2; i--){
		pos1 = 0;
		pos2 = i-1;
		target = a[i];
		ptr1 = a[pos1];
		ptr2 = a[pos2];
//		printf("\n");
//		print(target);
//		print(ptr1);
//		print(ptr2);
		while(pos1 != pos2){
			//
			if(ptr1 + ptr2 == target){
				printf("YES\n");
				return;
			}
			//
			if(ptr1 + ptr2 > target){
				pos2--;
				ptr2 = a[pos2];
			}
			else{
				pos1++;
				ptr1 = a[pos1];
			}
		}
	}
	printf("NO\n");
	return;
}

int main(){
	long long t;
	scan(t);
	while(t--){
		long long n;
		scanf("%d", &n);
		long long a[n];
		
		for(long long i=0; i<n; i++){
			long long temp;
			scanf("%d", &temp);
			a[i] = temp*temp;
		}
		
		check(a, n);
	}
	return 0;
}
