#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long
#define scan(n) scanf("%d", &n)
#define print(n) printf("%d", n)


//	Tính từ trái sang phải giá trị của các chữ số và nhóm chữ số giảm dần.
// I chỉ có thể đứng trước V hoặc X, 
// X chỉ có thể đứng trước L hoặc C, 
// C chỉ có thể đứng trước D hoặc M.
// // Các chữ cái I, X, C, M, 
// không được lặp lại quá ba lần liên tiếp; 
// các chữ cái V, L, D không được lặp lại quá một lần liên tiếp.


int main(){
	int t;
	scan(t);
	while(t--){
		scanf("\n");
		char a[100];
		gets(a);
		//  I=1; V=5; X=10; L=50; C=100;D=500; M=1000
		int res = 0;
		int check = 0;
		for(int i=strlen(a)-1; i>=0; i--){

			if(a[i] == 'I' && check == 1){
				res -= 1;
				if(a[i-1] != 'I') check = 0;
				continue;
				
			}
			if(a[i] == 'X' && check == 1){
				res -= 10;
				if(a[i-1] != 'X') check = 0;
				continue;
				
			}
			if(a[i] == 'C' && check == 1){
				res -= 100;
				if(a[i-1] != 'C') check = 0;
				continue;
				
			}

			
			/////////////////////////////////
			if(a[i] == 'V' && a[i-1] != 'I'){
				res += 5;
				check = 0;
				continue;
			}
			if(a[i] == 'X' && a[i-1] != 'I'){
				res += 10;
				check = 0;
				continue;
			}
		
			if(a[i] == 'V' && a[i-1] == 'I'){
				res += 5;
				check = 1;
				continue;
			}
			if(a[i] == 'X' && a[i-1] == 'I'){
				res += 10;
				check = 1;
				continue;
			}
			/////////////////////////////////
			if(a[i] == 'L' && a[i-1] != 'X'){
				res += 50;
				check = 0;
				continue;
			}
			if(a[i] == 'C' && a[i-1] != 'X'){
				res += 100;
				check = 0;
				continue;
			}
		
			if(a[i] == 'L' && a[i-1] == 'X'){
				res += 50;
				check = 1;
				continue;
			}
			if(a[i] == 'C' && a[i-1] == 'X'){
				res += 100;
				check = 1;
				continue;
			}
			/////////////////////////////////
			if(a[i] == 'D' && a[i-1] != 'C'){
				res += 500;
				check = 0;
				continue;
			}
			if(a[i] == 'M' && a[i-1] != 'C'){
				res += 1000;
				check = 0;
				continue;
			}
		
			if(a[i] == 'D' && a[i-1] == 'C'){
				res += 500;
				check = 1;
				continue;
			}
			if(a[i] == 'M' && a[i-1] == 'C'){
				res += 1000;
				check = 1;
				continue;
			}

			/////////////////////////////////

			if(a[i] == 'I' && check != 1){
				res += 1;
				continue;
			}
			if(a[i] == 'X' && check != 1){
				res += 10;
				continue;
			}
			if(a[i] == 'C' && check != 1){
				res += 100;
				continue;
			}
			if(a[i] == 'M' && check != 1){
				res += 1000;
				continue;
			}
		}
		printf("%d\n", res);
	}
	return 0;
}