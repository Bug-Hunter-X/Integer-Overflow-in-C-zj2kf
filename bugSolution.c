#include <stdio.h>
#include <limits.h>

int main() {
  long long x = 10;
  long long *ptr = &x;
  long long newValue = 20;

  // Check for potential overflow before assignment
  if (newValue > LLONG_MAX - 10 || newValue < LLONG_MIN + 10) {
    fprintf(stderr, "Error: Integer overflow would occur.\n");
    return 1;
  }

  *ptr = newValue;
  printf("%lld", x);
  return 0;
}
