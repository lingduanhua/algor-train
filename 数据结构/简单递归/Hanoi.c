#include "stdio.h"
void hanoi(int n, char A, char B, char C){
	if(n == 1){
		printf("%d from %c to %c\n", n, A, C);
	}else{
		hanoi(n-1, A, C, B);
		printf("%d from %c to %c\n", n, A, C);
		hanoi(n-1, B, A, C);
	}
	return;
}
int fun(int n){
	int i, sum = 1;
	for(i = 0; i < n; i ++){
		sum *= 2;
	}
	return sum - 1;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n", fun(n));
	hanoi(n, 'A', 'B', 'C');
	return 0;
}
