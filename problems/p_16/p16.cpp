/*
project euler problem 16
*/
#include <iostream>
#include <vector>
using namespace std;

typedef std::vector<unsigned int> Digits;

int twoToThe(int power){
  /*
    returns sum of all digits of 2^power
    eg
    2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26
  */
  int* array;
  array = new int[power];
  array[0] = 1;

  for (size_t i = 1; i <= power; i++) {
    int remainder = 0;
    array[i] = 0;
    for (size_t j = 0; j <= power; j++) {
      int product = array[j] * 2 + remainder;
      if (product > 9) {
        remainder = 1;
        product = product % 10;
      }
      else{
        remainder = 0;
      }
      array[j] = product;
    }
  }

  int sum = 0;
  for (size_t i = 0; i <= power; i++) {
    sum += array[i];
  }

  delete[] array;

  return sum;
}

int main(int argc, char const *argv[]) {
  std::cout << twoToThe(1000) << '\n';
  return 0;
}
