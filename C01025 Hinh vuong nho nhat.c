#include <stdio.h>
#include <math.h>

int max(int a, int b, int c, int d){
	int max;
	max = a;
	if(b>max) max = b;
	if(c>max) max = c;
	if(d>max) max = d;
	return max;
}

int min(int a, int b, int c, int d){
	int min;
	min = a;
	if(b<min) min = b;
	if(c<min) min = c;
	if(d<min) min = d;
	return min;
}

int main(){

	int x1, x2, x3, x4;
	int y1, y2, y3, y4;

	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	scanf("%d %d %d %d", &x3, &y3, &x4, &y4);

	int xMax, yMax, xMin, yMin;

	xMax = max(x1, x2, x3, x4);
	yMax = max(y1, y2, y3, y4);
	xMin = min(x1, x2, x3, x4);
	yMin = min(y1, y2, y3, y4);

	int S;
    
	if((xMax-xMin)>=(yMax-yMin)) S = (xMax-xMin)*(xMax-xMin);
	else S = (yMax-yMin)*(yMax-yMin);
	
	printf("%d", S);
}




