#include <stdio.h>
int main(){
	double i = 2; 
	int a = 0;
	double s = 1;
	scanf("%d",&a);
	while(s <= a){
		s = s + (1 / i);
		i ++;
	}
	printf("%d",(int)(i-1));
	return 0;
}
