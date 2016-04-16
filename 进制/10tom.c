#include "stdio.h"
int main(){
	int n, m, t = 1,con = 0;
	scanf("%d %d", &n, &m);
	while(t < n){
		t = t * m;
		con ++;
	}
	int a[con],i=0;
	
	while(n>=m){
		a[i] = n % m;
		n = n / m;
		i ++;
	}
	a[i] = n;
	for(; i >= 0; i --){
		if(a[i] > 9){
			printf("%c",a[i]+55);
		}
		else{
			printf("%d",a[i]);
		}
	}
	return 0;
} 
