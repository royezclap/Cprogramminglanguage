#include <stdio.h>
int main() {
  int n, a, b = 0;
  printf("Enter n: ");
  scanf("%d", &n);

  for (a = 2; a <= n / a; ++a) {
    if (n % a == 0) {
      b = 1;
      break;
    }
  }

  if (n == 1) {
    printf("1 khong phai la prime va composite number");
  } 
  else {
    if (b == 0)
      printf("%d is a prime number", n);
    else
      printf("%d not a prime number", n);
  }
}