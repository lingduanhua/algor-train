#include "stdio.h"
int max(int a, int b){
	return a > b ? a:b;
}
int * a;
int n;
int hei(int n){
	if(n == 0){
		return 0;
	}
	int r = a[2*n-1];
	int l = a[2*n];
	
	return max( wid(r) , wid(l) ) + 1; 
}
int wid(){
	int qlen = n / 2 + 1;
	int q[qlen];
	q[0] = 1;
	int p = 0;
	int lastNode = 0;
	int nowNode = 0;
	while(p >= 0){
		
	} 
}
int main(){
	
	scanf("%d", &n);
	int a[2*n+1];
	int i;
	for(i = 1; i <= 2n; i ++){
		scanf("%d",a[i]);
	}
	printf("%d %d", wid(1), hei(1));
	return 0;
}
