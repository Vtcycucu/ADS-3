// Copyright 2025 NNTU-CS
uint64_t collatzMaxValue(uint64_t n) {
  uint64_t m = n;
  while (n != 1) {
    n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    if (n > m) m = n;
  }
  return m;
}

unsigned int collatzLen(uint64_t n) {
  unsigned int l = 1;
  while (n != 1) {
    n = (n % 2 == 0) ? n / 2 : 3 * n + 1;
    l++;
  }
  return l;
}

unsigned int seqCollatz(unsigned int *l, uint64_t a, uint64_t b) {
  *l = 0;
  unsigned int r = a;

  for (uint64_t i = a; i <= b; i++) {
    unsigned int t = collatzLen(i);
    if (t > *l) {
      *l = t;
      r = i;
    }
  }

  return r;
}
