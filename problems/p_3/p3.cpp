/*
project euler problem 3
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

long getLargestPrimeFactor(long num){
  long largest = 0;
  long i = 2;
  while (i * i <= num) {
    if (num % i == 0) {
      if (isPrime(i))  {
        largest = i;
      }
    }
    i++;
  }

  return largest;
}

int main(int argc, char const *argv[]) {
  std::cout << "largest prime factor is: " << getLargestPrimeFactor(600851475143) << "\n";
  return 0;
}
