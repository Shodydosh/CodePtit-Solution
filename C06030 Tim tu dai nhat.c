#include <stdio.h>
#include <math.h>
#include <string.h>

#define ll long long
#define scan(n) scanf("%d", &n)
#define print(n) printf("%d", n)

int main(){ 
	char words[2000][1000];
	int k = 0;

	while(scanf("%s", words[k]) != -1){
		k++;
	}

	// for(int i=0; i<k; i++){
	// 	printf("%s\n", words[i]);
	// }
	
	// tim max length 
	int maxLength = 1;
	int check[2000] = {};

	for(int i=0; i<k; i++){
		if(maxLength < strlen(words[i])){
			maxLength = strlen(words[i]);
		} 	
	}

	int count;
	
	for(int i=0; i<k; i++){
		if(check[i] == 0){
			count = 1;
			if(strlen(words[i]) == maxLength){
				for(int j=i+1; j<k; j++){
					if(strcmp(words[i], words[j]) == 0){
						check[j] = 1;
						count++;
					} 
				}
				printf("%s %d %d\n", words[i], maxLength, count);
			}
		}
	}


	// for(int i=0; i<k; i++){
	// 	printf("%s\n", words[i]);
	// }

	return 0;
}