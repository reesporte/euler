/*
project euler problem 10
*/
#include <iostream>

long sieveEratos(int num){
  /*
  modified sieve of eratosthenes algorithm, takes a sum along the way
  */
  bool* arr = new bool[num];

  for (size_t i = 0; i < num; i++) {
    arr[i] = true;
  }

  int i = 2;
  long sum = 0;

  while (i*i <= num) {
    if (arr[i]) {
      for (size_t j = i*i; j < num; j += i) {
        arr[j] = false;
      }
    }
    i++;
  }

  for (size_t i = 2; i < num; i++) {
    if (arr[i]) {
      sum += i;
    }
  }

  delete [] arr;
  return sum;
}

int main(int argc, char const *argv[]) {
  std::cout << sieveEratos(2000000) << "\n";
  return 0;
}
