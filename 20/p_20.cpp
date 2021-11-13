/*
project euler problem 20
*/
#include <iostream>
#include <vector>

int main(int argc, char const *argv[]) {

  int factorial_number = 100;

  std::vector<int > num;
  num.push_back(1);

  for (size_t i = 2; i < factorial_number; i++) {
    int remainder = 0;
    for (size_t j = 0; j < num.size(); j++) {
      int number = num[j];
      number = number * i + remainder;
      if (number >= 10) {
        remainder = number/10;
        number %= 10;
      }
      else{
        remainder = 0;
      }
      num[j] = number;
    }
    while (remainder != 0) {
      num.push_back(remainder % 10);
      remainder /= 10;
    }
  }

  int count = 0;
  for (size_t i = 0; i < num.size(); i++) {
    count += num[i];
  }

  std::cout << count << '\n';
  return 0;
}
