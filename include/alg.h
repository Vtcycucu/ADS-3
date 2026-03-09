// Copyright 2025 NNTU-CS
#ifndef INCLUDE_ALG_H_
#define INCLUDE_ALG_H_
#include <cstdint>

unsigned int collatzLen(uint64_t num);
uint64_t collatzMaxValue(uint64_t num);
unsigned int seqCollatz(unsigned int *maxlen, uint64_t lbound, uint64_t rbound);

#endif  // INCLUDE_ALG_H_
