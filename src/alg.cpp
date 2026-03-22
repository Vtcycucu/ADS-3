// Copyright 2025 NNTU-CS
#include <cstdint>
#include "alg.h"
uint64_t collatzMaxValue(uint64_t num) {
  uint64_t m = num;
  while (num != 1) {
    if (num % 2 == 0)
      num  /= 2;
    else
      num = 3 * num + 1;
    if (num > m)
      m = num;
  }
  return m;
}
unsigned int collatzLen(uint64_t num) {
  unsigned int l = 1;
  while (num != 1) {
    if (num % 2 == 0)
      num /= 2;
    else
    num = 3 * num + 1;
    l++;
  }
  return l;
}
unsigned int seqCollatz(unsigned int *maxlen,
                        uint64_t lbound,
                        uint64_t rbound) {
  unsigned int a = lbound;
  *maxlen = 0;
  for (uint64_t i = lbound; i <= rbound; i++) {
    unsigned int b = collatzLen(i);
    if (b > *maxlen) {
      *maxlen = b;
      a = i;
    }
  }
  return a;
}
