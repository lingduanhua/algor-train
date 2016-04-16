#include "stdio.h"
#include "stdlib.h"
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
	//printf("%d Node : left : %d\t right : %d\n",n , r , l );
	return max( hei(r) , hei(l) ) + 1; 
}
int wid(){
	int temp;
	int qlen = n / 2 + 2;
	int q[qlen],i=0,j=1;
	q[i] = 1;
//	printf("len : %d\n", qlen);
	int len = 1,r,l;
	int tempNode,maxNode = 1;
	while(len > 0){
		tempNode = len;
		while(tempNode > 0){
			r = a[  2 * q[i] - 1 ];
//			printf("r : %d\t", r);
			l = a[ 2 * q[i] ];
//			printf("l : %d\n", l);
			if(r != 0){
				q[j] = r;
				j ++;
				if(j >= qlen) j = 0; 
			}
			if(l != 0){
				q[j] = l;
				j ++;
				if(j >= qlen) j = 0;
			}
			i ++;
			if(i >= qlen) i = 0;
			tempNode --;
//			printf("i : %d\t j : %d\n",i,j );
//			scanf("%d", &temp);
		}
		len = j - i;
		if (len < 0) len += qlen;
//		printf("Now : %d\n"  ,len);
		if( len > maxNode){
			maxNode = len;
		} 
	} 
	return maxNode;
}
int main(){
	scanf("%d", &n);
	a = (int *)malloc( (2*n+1) * sizeof(int)) ;
	int i;
	for(i = 1; i <= 2*n; i ++){
		scanf("%d",a + i);
	}
	printf("%d ", wid());
	printf("%d\n", hei(1));
	return 0;
}
