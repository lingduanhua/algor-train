#include "stdio.h"
int main(){
	char a[20][20];
	int i = 0,j = 0, p , q;
	char c='a';
	while(c != '\n'){
		scanf("%c",&c);
		if(c == '\n'){
			break;
		}
		if(c != 32){
			a[i][j] = c;
			j ++;
		}else{
			a[i][j] = '\0';
			j = 0;
			i ++;
		}
	}
	a[i][j] = '\0';
	for(p = i; p >=0; p --){
		q = 0;
		while(a[p][q] != '\0'){
			printf("%c",a[p][q]);
			q ++;
		}
		if(p > 0){
			printf(" ");
		}
	}
	return 0;
}