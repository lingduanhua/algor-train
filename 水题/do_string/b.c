#include <stdio.h>
char s[100][100];

int cnt = -1;

int main() {

while (scanf("%s", s[++cnt]) != EOF);

printf("%s", s[--cnt]);

while (cnt)

printf(" %s", s[--cnt]);

printf("\n");

return 0;

}