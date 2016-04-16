#include "stdio.h"
int fun(int a){
	if(a >= 0){
		return 5;
	}
	return fun(a + 1) + fun( a + 2 ) + 1;
}
int main(){
	int n;
	scanf("%d", &n);
	printf("%d", fun(n));
	return 0;
}
