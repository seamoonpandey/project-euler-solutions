#include <stdio.h>
int main(void)
{
  long long n = 600851475143;
  long long i;
  for (i = 3; i < n/2; i+=2) {
    while (n % i == 0) {
      n /= i;
    }
  }
  printf("%lld\n", n);
  return 0;
}
