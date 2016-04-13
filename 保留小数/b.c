#include "stdio.h"
int main(){
	int a;
	float f,b;
	scanf("%d %f", &a, &f );
	b = a * f / 100;
	b += 0.5;
	printf("%d",(int)b * 10);
	return 0;
}