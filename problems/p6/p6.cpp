/*
project euler problem 6
*/
#include <iostream>

int solution(int num){
  int sum = 0;
  int squared = 0;
  
  sum = num * (num+1)/ 2;
  squared = (num * (num + 1) * (2 * num + 1)) / 6;

  return sum*sum - squared;
}

int main(int argc, char const *argv[]) {
  std::cout << solution(100) << '\n';
  return 0;
}
