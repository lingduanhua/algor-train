#include "stdio.h"
#include "math.h"
int main(){
    int a;
    scanf("%d",&a);
    int b = sqrt(a);
    int i;
    for(i = 2; i <= b; i ++){
        if( a % i == 0 ){
            printf("\\n");
            return 0;
        }
    }
    printf("\\t");
    return 0;
}
