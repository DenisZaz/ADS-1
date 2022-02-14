// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
if (value == 1) {
    return false;
}
for (int i = 2; i <= sqrt(value); i++) {
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
    if (n == i) {
      return num;
    }
    num++;
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
for (int i = 0; i < n; i++) {
  if (checkPrime(i)) {
    summ += i;
  }
}
return summ;
}
