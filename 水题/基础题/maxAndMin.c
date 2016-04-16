#include <stdio.h>
int main(){
	char c[50],a[25],b[25];
	scanf("%s", a);
	scanf("%s", b);

	int i , p , q;
	while(a[i] != '.'){
		i ++;
	}
	p = i;
	i = 0;
	while(b[i] != '.'){
		i ++;
	}
	q = i;
	
	if(p != q){
		printf("no");return 0;
	}
	for(i = 0;i < p + 9; i ++){
		if(a[i] != b[i]){
			printf("no");return 0;
		}
	}
	printf("yes");
	return 0;
}
