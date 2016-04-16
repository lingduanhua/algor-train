#include "stdio.h"
int con;
void fun(int x){
	if(x == 1){
		return;
	}
	if( x % 2 == 0){
		x = x / 2;
	}else{
		x = 3 * x + 1;
	}
	con ++;
	return fun(x);
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n], i;
	for(i = 0; i < n; i ++){
		scanf("%d", a + i);
	}
	for(i = 0; i < n; i ++){
		con = 0;
		fun(a[i]);
		printf("%d\n", con);
	}
	return 0;
}
