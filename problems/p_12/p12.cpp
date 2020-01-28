/*
project euler problem 12
*/
#include <iostream>

int divisorCount(long num){
  int count = 2;
  int i = 2;
  while (i * i < num) {
    if (num % i == 0) {
      count += 2;
    }
    i++;
  }
  return count;
}

long solution(){
  long number = 1;
  long ordinal = 2;
  while (divisorCount(number) < 500){
    number += ordinal;
    ordinal++;
  }
  return number;
}

int main(int argc, char const *argv[]) {
  std::cout << solution() << '\n';
  return 0;
}
