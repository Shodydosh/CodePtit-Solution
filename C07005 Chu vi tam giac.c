#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define ll long long
#define scan(n) scanf("%d", &n)
#define print(n) printf("%d ", n)
#define nhap(str) fgets(a, 100, stdin); a[strlen(str)] = 0;

typedef struct{
	float xA, yA, xB, yB, xC, yC;
}TG;

float calculate(float x1, float x2, float y1, float y2){
	float res;
	res = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	return res;
}

void check(TG t){
	float ab, bc, ca;
	ab = calculate(t.xA, t.xB, t.yA, t.yB);
	bc = calculate(t.xB, t.xC, t.yB, t.yC);
	ca = calculate(t.xC, t.xA, t.yC, t.yA);
	
	if(ab+ca>bc&&ab+bc>ca&&bc+ca>ab){
		float index = ab + bc + ca;
		printf("%.3f\n", index);
	}
	else{
		printf("INVALID\n");
	}
}

int main(){
	int t;
	scan(t);
	while(t--){
		TG t;
		scanf("%f %f %f %f %f %f", &t.xA,  &t.yA,  &t.xB,  &t.yB,  &t.xC,  &t.yC);
		check(t);
	}
}