#include "stdio.h"
#include "stdlib.h"
int n, *a;
void preorderTraversal(int n){
	printf("%d ",n);
	int l = a[n * 2 - 1 ];
	int r = a[n * 2];
	if(l != 0){
		preorderTraversal(l);
	}
	if(r != 0){
		preorderTraversal(r);
	}
}
void inorderTraversal(int n){
	int l = a[n * 2 - 1 ];
	int r = a[n * 2];
	if(l != 0){
		inorderTraversal(l);
	}
	printf("%d ",n);
	if(r != 0){
		inorderTraversal(r);
	}
}
void postorderTraversal(int n){
	int l = a[n * 2 - 1 ];
	int r = a[n * 2];
	if(l != 0){
		postorderTraversal(l);
	}
	if(r != 0){
		postorderTraversal(r);
	}
	printf("%d ",n);
}
int main(){
	scanf("%d", &n);
	a = (int *)malloc( (2*n+1) * sizeof(int)) ;
	int i;
	for(i = 1; i <= 2*n; i ++){
		scanf("%d",a + i);
	}
	preorderTraversal(1);printf("\n");
	inorderTraversal(1);printf("\n");
	postorderTraversal(1);
	return 0;
}
