#include <stdio.h>
int main() {
  int n, i;
  do{
      printf("Enter n: "); scanf("%d", &n);
  }while(n<1||n>9);
  for (i = 1; i <= 10; ++i) {
    printf("%d * %d = %d \n", n, i, n * i);
  }
 
}