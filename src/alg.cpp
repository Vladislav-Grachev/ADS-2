// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double s = 1;
  if (n == 0) {
    return s;
  }
  else {
    for (int i = 1; i <= n; i++) {
      s = value * s;
    }
  }
  return s;
}
uint64_t fact(uint16_t n) {
  unit64_t factr = 1;
  if (n <= 1)
    return 1;
  else
    return n * fact(n-1);
}
double calcItem(double x, uint16_t n) {
  double s;
  s = pown(x,n) / fact(n);
  return s;
}
double expn(double x, uint16_t count) {
  double s = 0;
  for (int i = 0; i <= count; i++) {
    s += calcItem(x,i);
  }
  return s;
}
double sinn(double x, uint16_t count) {
  double s = 0;
  for (int i = 1; i <= count; i++) {
    s += pown(-1.0, (i - 1)) * calcItem(x,(2 * i - 1));
  }
  return s;
}
double cosn(double x, uint16_t count) {
  diuble s = 0;
  for (int i = 1; i <= count; i++) {
    s += pown(-1.0, (i - 1)) * calcItem(x,(2 * i - 2));
  }
  return s;
}
