#include <stdio.h>
#include <math.h>

int taoHinhVuong(int a1, int a2, int a3, int b1, int b2, int b3){
	if(a1==a2){
		if(b1+b2==b3){
			if(a1+a3==b3){
				return 1;
			}
			else{
				return 0;
			}
		}
		else{
			return 0;
		}
	}  
	else{
		return 0;
	}
}

int able(int x1, int x2, int x3, int y1, int y2, int y3){
	if(taoHinhVuong(x1,x2,x3,y1,y2,y3)){
		return 1;
	}
	else if(taoHinhVuong(x2,x3,x1,y2,y3,y1)){
		return 1;
	}
	else if(taoHinhVuong(x1,x3,x2,y1,y3,y2)){
		return 1;
	}
	else if(taoHinhVuong(y1,y2,y3,x1,x2,x3)){
		return 1;
	}
	else if(taoHinhVuong(y2,y3,y1,x2,x3,x1)){
		return 1;
	}
	else if(taoHinhVuong(y1,y3,y2,x1,x3,x2)){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	int x1, x2, x3;
	int y1, y2, y3;
	scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
	int check;
	check = 0;
	if(able(x1,x2,x3,y1,y2,y3)){
		check = 1;
	}
	// trao 1
	else if(able(y1,x2,x3,x1,y2,y3)){
		check = 1;
	}
	else if(able(x1,y2,x3,y1,x2,y3)){
		check = 1;
	}
	else if(able(x1,x2,y3,y1,y2,x3)){
		check = 1;
	}
	// trao 2
	else if(able(y1,y2,x3,x1,x2,y3)){
		check = 1;
	}
	else if(able(x1,y2,y3,y1,x2,x3)){
		check = 1;
	}
	else if(able(y1,x2,y3,x1,y2,x3)){
		check = 1;
	}
	// trao 3
	else if(able(y1,y2,y3,x1,x2,x3)){
		check = 1;
	}
	//
	if(check){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}





