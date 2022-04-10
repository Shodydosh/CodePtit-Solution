#include<stdio.h>
#include<math.h>

int n,i,j,z,t,kt,ans;
char a[15][15];

int main(){
    scanf("%d",&n);
    scanf("\n");
    for(i=0;i<n;++i){
        for(j=0;j<n;++j) scanf("%c",&a[i][j]);
        scanf("\n");
    }
    ans=0;
    while (1){
        kt=0;
        for(i=n-1;i>=0;--i){
        	
            for(j=n-1;j>=0;--j){
            	
            	if (a[i][j]=='1'){
            		
                    for(z=0;z<=i;++z){
                    	for(t=0;t<=j;++t){
                    		// swap 1 ve 0, 0 ve 1
                        	a[z][t]=(a[z][t]-'0'+1)%2+'0';
						} 
					}
					
                    ans++;
                    kt=1;
                    break;
                    
                }
            	
			}
                
            if (kt) break;
        }
        if (!kt) break;
    }
    printf("%d",ans);
}
