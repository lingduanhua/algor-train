#include "stdio.h"
int main(){
	int a;
	scanf("%d", &a);
	int i = 1;
	int t = 1;
	while(t < a){
		i ++;
		t = t + i;
	}
	int b;
	int c = t - a;
	if(i % 2 == 0){
		a = i - c;
		b = c + 1;
	}else{
		a = c + 1;
		b = i - c;
	}
	printf("%d/%d", a , b);
	return 0;
}