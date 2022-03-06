// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double resl = 1;
  if (n == 0) {
    return resl;
}
  else {
    for (int i = 1; i <= n; i++) {
      resl = value * resl;
    }
  }
  return resl;
}
uint64_t fact(uint16_t n) {
  uint16_t factr = 1;
  if (n <= 1)
    return 1;
  else
    return n * fact(n - 1);
}
double calcItem(double x, uint16_t n) {
  double resl;
  resl = pown(x, n) / fact(n);
  return resl;
}
double expn(double x, uint16_t count) {
  double resl = 0;
  for (int i = 0; i <= count; i++) {
    resl += calcItem(x, i);
  }
  return res;
}
double sinn(double x, uint16_t count) {
  double resl = 0;
  for (int i = 1; i <= count; i++) {
    resl += pown(-1.0, (i - 1)) * calcItem(x, (2 * i - 1));
  }
  return resl;
}
double cosn(double x, uint16_t count) {
  double resl = 0;
  for (int i = 1; i <= count; i++) {
    resl += pown(-1.0, (i - 1)) * calcItem(x, (2 * i - 2));
  }
  return resl;
}
