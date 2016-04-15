#include "stdio.h"
int main(){
	int n;
	scanf("%d", &n);
	int arr[n+1][n+1];
	int len = (n + 1) / 2;
	int x = 0,y = 0,con = 1,sum = 1,p,d;
	arr[y + len][x + len] = con;
	for(p  = 1; p < len; p ++){
		x ++;con++;
		for( d = 0; d < 4 ; d ++){
			while(x <= p && x >= -p && y <= p && y >= -p){
				arr[y + len][x + len] = con ++;
				switch (d){
					case 0: y --;break;
					case 1: x --;break;
					case 2: y ++;break; 
					case 3: x ++;break;
				}
			}
			switch (d){
				case 0: y ++;break;
				case 1: x ++;break;
				case 2: y --;break; 
				case 3: x --;break;
			}
			con --;
			sum += con;
		}
	}
	for(x = 1; x <=n; x ++){
		for(y = 1; y <=n; y ++){
			printf("%d ",arr[x][y]);
		}
		printf("\n");
	}
	printf("%d",sum);
	return 0;
}