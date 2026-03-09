// Copyright 2025 NNTU-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(seqCollatz, test1) {
  unsigned int maxlen, number;
  number = seqCollatz(&maxlen, 1, 1000000);
  ASSERT_EQ(525, maxlen);
  ASSERT_EQ(837799, number);
}

TEST(seqCollatz, test2) {
  unsigned int maxlen, number;
  number = seqCollatz(&maxlen, 1, 30);
  ASSERT_EQ(112, maxlen);
  ASSERT_EQ(27, number);
}

TEST(seqCollatz, test3) {
  unsigned int maxlen, number;
  number = seqCollatz(&maxlen, 1, 100);
  ASSERT_EQ(119, maxlen);
  ASSERT_EQ(97, number);
}

TEST(collatzLen, test1) {
  unsigned int len;
  len = collatzLen(27);
  ASSERT_EQ(112, len);
}

TEST(collatzLen, test2) {
  unsigned int len;
  len = collatzLen(3);
  ASSERT_EQ(8, len);
}

TEST(collatzMaxValue, test1) {
  unsigned int number;
  number = collatzMaxValue(27);
  ASSERT_EQ(9232, number);
}

TEST(collatzMaxValue, test2) {
  unsigned int number;
  number = collatzMaxValue(3);
  ASSERT_EQ(16, number);
}
