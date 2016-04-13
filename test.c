#include "stdio.h"
#include "stdlib.h"
int* creatE(){
	int i,n = 10;
	int * a = (int *)malloc(n*sizeof(int));
	for(i = 0; i < n; i ++){
		(*(a+i)) = i+1;
	}
	return a;
}
void insertE(int * a, int value, int len){
	a = (int *)realloc(a, (len+1)*sizeof(int));
	*(a+len) = value;
}
int main(){
	// char s[100], t[100];
	// scanf("%s",s);
	// scanf("%s",t);
	// printf("%s\n", s);
	// printf("%s\n", t);
	int * arr;
	arr = creatE();
	int i,n = 10;
	for(i = 0; i < n; i ++){
		printf("%d\n",*(arr+i));
	}
	insertE(arr,20,n);
	n ++;
	printf("%d\n",*(arr+n));
	return 0;
}
