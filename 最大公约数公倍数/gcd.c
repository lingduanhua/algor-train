#include "stdio.h"
int gcd(int a, int b){
	if(a <= 0 || b <= 0){
		return 0;
	}
	if(a == 1 || b == 1){
		return 1;
	}
	if(a == b){
		return a;
	}
	int r = 1;
	if(a < b){
		r = a;
		a = b;
		b = r;
	}
	while(r > 0){
		r = a % b;
		printf("%d = %d * x + %d\n", a , b , r);
		a = b;
		b = r;
	}
	return a;
}
int main(){
	int a,b;
	scanf("%d",&a);
	scanf("%d", &b);
	printf("%d", gcd(a,b));
	return 0;
}