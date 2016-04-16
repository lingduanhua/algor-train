#include <stdio.h>
#include "math.h"
int main(){
	int a,b,c,d,i,q=2;
	scanf("%d %d", &a, &b);
	if(b % a != 0){
		printf("0");
		return 0;
	}
	c = b / a;
	if(c == 1){
		printf("1");
		return 0;
	}
	d = sqrt(c);
	
	for(i = 2; i <= d; i ++){
		if(c%i == 0){
			if(isL(c / i, i) > 0){
				q += 2;
			}
		}
	}
	printf("%d",q);
	return 0;
}
int isL(int a, int b){
	if(a == 1 || b == 1){
		return 1;
	}
	if(a == b){
		return 0;
	}
	int r = 1, x, y;
	if(a > b){
		x = a;
		y = b;
	}else{
		x = b;
		y = a;
	}
	while(r != 0){
		r = x % y;
		x = y;
		y = r;
	}
	return x == 1 ? 1 : 0;
}
