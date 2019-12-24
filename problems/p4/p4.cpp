/*
project euler problem 4
*/
#include <iostream>
#include <string>
using std::string;

bool isPalindrome(int num){
  string number = std::to_string(num);
  while (number.size() > 0) {
    if (number[0] != number[number.size() - 1]) {
      return false;
    }
    number = number.substr(1, number.size()-2);
  }
  return true;
}

int main(int argc, char const *argv[]) {
  int largest = 0;
  int a = 0;
  int b = 0;
  for (size_t i = 100; i < 1000; i++) {
    for (size_t j = 100; j < 1000; j++) {
      int product = i * j;
      if (isPalindrome(product) && product > largest) {
        largest = product;
        a = i;
        b = j;
      }
    }
  }
  std::cout << largest << " = " << a << " x " << b << '\n';
  return 0;
}
