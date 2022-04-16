#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define ll long long
#define scan(n) scanf("%d", &n)
#define print(n) printf("%d", n)
#define nhap(str) fgets(a, 100, stdin); a[strlen(str)] = 0;

/*  
	Idea là duyệt từ cuối lên
	lấy chữ cái sau cùng làm mốc
	- nếu bằng thì thêm vào arr
	- nếu hơn thì thêm vào arr + update mốc
*/

int main(){
    char s[100001];
    fgets(s, 100001, stdin);
    s[strlen(s)] = '\0';
    
    int mark = s[strlen(s)-1];
    int len = strlen(s);
    char str[100001];
    int index = 0;
    int check = 0;

    for(int i=len-1; i>=0; i--){
        if(mark == s[i]){
        	str[index] = s[i];
        	index++;
		}
		else if(mark < s[i]){
			mark = s[i];
			str[index] = s[i];
			index++;
		}
    }

    for(int i=index-1; i>=0; i--) printf("%c", str[i]);

}