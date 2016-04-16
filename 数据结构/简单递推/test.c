#include "stdio.h"
int main(){
    int a, count = 1,i,j;
    scanf("%d",&a);
    int len = a/2 + 1 ;
    int x[len];
    for(i = 1; i < len; i ++){
		x[i] = 1;
		for(j = i / 2; j >= 1; j --){
			x[i] += x[j];
		}
	}
	for(i = 1; i < len; i ++){
		count += x[i];
	}
	printf("%d", count);
	return 0;
}
