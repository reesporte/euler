/*
project euler problem 5
*/

#include <iostream>

bool isDivisible(int num){
  for (size_t i = 11; i < 21; i++) {
    if (num % i != 0) {
      return false;
    }
  }
  return true;
}

int main(int argc, char const *argv[]) {
  int smallest = 20;

  while (!isDivisible(smallest)) {
    smallest += 20;
  }

  std::cout << smallest << '\n';


  return 0;
}
