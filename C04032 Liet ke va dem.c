#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long
#define scan(n) scanf("%d", &n)
#define print(n) printf("%d", n)

int checkKG (char a[]){
	for(int i=1; i<strlen(a); i++){
		if(a[i] < a[i-1]) return 0;
	}
	return 1;
}

int main(){ 
	char numbers[10000][10];
	char nums[10000][10];
	char frequent[10000];
	int k = 0;
	
	while(scanf("%s", &numbers[k]) != -1){
		k++;
	}

	// for(int i=0; i<k; i++){
	// 	printf("%s\n", numbers[i]);
	// }

	int check[10000] = {};
	int p = 0;
	int count;
	
	for(int i=0; i<k; i++){
		if(check[i] == 0){
			count = 1;
			if(checkKG(numbers[i])){
				for(int j=i+1; j<k; j++){
					if(strcmp(numbers[i], numbers[j]) == 0){
						check[j] = 1;
						count++;
					} 
					
				}
				//printf("%s %d\n", numbers[i], count);
				strcpy(nums[p], numbers[i]);
				frequent[p] = count;
				p++;
			}
			
		}
	}

	for(int i=0; i<p-1; i++){
		for(int j=i+1; j<p; j++){
			if(frequent[j] > frequent[i]){
				char tmp[11];
				strcpy(tmp, nums[i]);
				strcpy(nums[i], nums[j]);
				strcpy(nums[j], tmp);

				int temp = frequent[i];
				frequent[i] = frequent[j];
				frequent[j] = temp;
			}
		}
	}

	for(int i=0; i<p; i++){
		printf("%s %d\n", nums[i], frequent[i]);
	}


	// for(int i=0; i<k; i++){
	// 	printf("%s\n", numbers[i]);
	// }

	return 0;
}