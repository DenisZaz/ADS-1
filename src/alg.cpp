// Copyright 2022 NNTU-CS
#include <cmath>
#include <cstdint>
#include "alg.h"



bool checkPrime(uint64_t value) {
if (value == 1) {
  return false;
}
for (int i = 2; i <= sqrt(value); i++) {
  if (value % i == 0) {
    return false;
  }
}
return true;
}

uint64_t nPrime(uint64_t n) {
int i = 0;
int num = 2;
while (true) {
  if (checkPrime(num)) {
  i++;
  }
  if (n == i) {
    return num;
  }
  num++;
}
return num;
}

uint64_t nextPrime(uint64_t value) {
while (true) {
  value++;
  if (checkPrime(value))
  return value;
}
return value;
}


uint64_t sumPrime(uint64_t hbound) {
uint64_t sum = 0;
for (int i = 0; i < hbound; i++) {
  if (checkPrime(i))
  sum += i;
}
return sum;
}
