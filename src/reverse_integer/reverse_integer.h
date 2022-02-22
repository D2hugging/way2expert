#ifndef REVERSE_INTEGER_H_
#define REVERSE_INTEGER_H_

#include <limits.h>

namespace foo {

int reverseInteger(int x) {
  long long res = 0;
  while (x) {
    res = res * 10 + x % 10;
    x /= 10;
  }
  return (res < INT_MIN || res > INT_MAX) ? 0 : res;
}

}  // namespace foo

#endif