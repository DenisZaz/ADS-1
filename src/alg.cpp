// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
if (value == 1) {
    return false;
}
int sqrtValue = sqrt(value);
for (int i = 2; i <= sqrtValue; i++) {
  if (value % i == 0) {
    return false;
    break;
  }
}
return true;
}

uint64_t nPrime(uint64_t n) {
int i = 0;
int num = 2;
  while (n >= i) {
    if (checkPrime(num)) {
      i++;
    }
    num++;
    if (n == i) {
      return num;
    }
  }
}

uint64_t nextPrime(uint64_t value) {
  while (true) {
    value++;
    if (checkPrime(value)) {
      return value;
      break;
    }
  }
}


uint64_t sumPrime(uint64_t hbound) {
uint64_t summ = 0;
int i = 0;
  while (n > i) {
    if (checkPrime(i)) {
      summ += i;
    }
    i++;
  }
return summ;
}
