/*
project euler problem 7
*/
#include <iostream>

bool isPrime(long num){
  if (num == 1) {
    return false;
  }
  long i = 2;
  while (i * i <= num) {
    if (num % i == 0) {
      return false;
    }
    i++;
  }
  return true;
}

int main(int argc, char const *argv[]) {
  int nextPrime = 3;
  int numberOfPrimes = 2;
  int lastPrime = 0;
  while (numberOfPrimes <= 10001) {
    if (isPrime(nextPrime)) {
      numberOfPrimes += 1;
      lastPrime = nextPrime;
    }
    nextPrime += 2;
  }
  std::cout << lastPrime << '\n';
  // std::cout << isPrime(104743) << '\n';
  return 0;
}
