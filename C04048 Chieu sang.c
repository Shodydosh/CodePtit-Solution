#include <stdio.h>
#include <math.h>

int main(){
	int length, range, available;
	scanf("%d%d%d", &length, &available, &range);
	
	int road[1024] = {};
	for(int i=0; i<available; i++){
		int temp;
		scanf("%d", &temp);
		road[temp-1] = 1;
	}
	
	int newroad[1024] = {};
	int res=0;
	
	for(int i=0; i<length; i++){
		if(road[i] == 1){
			for(int j=i-range; j<=i+range; j++){
				if(j >= 0 && j <=length ){
					newroad[j] = 1;		
				}
			}
		}
	}
	
//	for(int i=0; i<length; i++) printf("%d ", newroad[i]);
	
	int temp=0;
	newroad[length] = 1;
	
	for(int i=0; i<=length; i++){
//		printf("<%d>\n", res);
		if(newroad[i] == 0){
			temp++;
		}
		else{
			if(temp > 0){
				
				if(temp > 2*range+1){
//					printf("1\n");
					if(range == 0){
						res += temp;
					}
					else{
						res += temp/(2*range+1) + 1;
					}	
				}
				else if(temp == 2*range+1){
					res++;
				}
				else{
					res++;
				}
				
				temp = 0;	
			}
		}
	}
	
	printf("%d", res);
}

