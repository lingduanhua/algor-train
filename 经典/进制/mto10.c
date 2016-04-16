#include "stdio.h"
int main(){
	char c;
	char n[10];
	int i = -1,m,p,j,t = 0,sum,len;
	do{
		i ++;
		scanf("%c", n+i);
	}while(n[i] != ' ');
	scanf("%d", &m);
	len = --i;
	for(; i >= 0; i --){
		if(n[i] >= 'A'){
			t = n[i] - 55;
		}else{
			t = n[i] - 48;
		}
		if(t == 0){
			continue;
		}
		p = 1;
		for(j = 0; j < len - i; j ++){
			p *= m;
		}
		sum += t * p;
	}
	printf("%d",sum);
	return 0;
	
}
