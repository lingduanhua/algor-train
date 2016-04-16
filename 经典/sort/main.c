#include "stdio.h"
int par(int * a, int p, int r){
	int i = p-1,j = 0;
	int x = a[r],temp;
	for(j = p; j < r; j ++){
		if(a[j] <= x){
			i ++;
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	i ++;
	temp = a[i];
	a[i] = x;
	a[r] = temp;
	return i;
}
void sortA(int * a, int p, int r){
	if(r>p){
		int q = par(a, p ,r);
		sortA(a, p, q - 1);
		sortA(a, q + 1, r);
	}
}
int main(){
	int n ;
	scanf("%d",&n);
	int a[n],i;
	for(i = 0; i < n; i ++){
		scanf("%d",a+i);
	}
	sortA(a,0,n-1);
	for(i = 0; i < n; i ++){
		printf("%d ",*(a+i));
	}
	return 0;
}