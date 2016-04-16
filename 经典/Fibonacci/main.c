#include "stdio.h"
int main(){
	int n,i,f1 = 1, f2 = 1;
	scanf("%d", &n);
	for(i = 2 ; i < n; i ++){
		f2 = f1 + f2;
		f1 = f2 - f1;
	}
	printf("%d", f2);
	return 0;
}
