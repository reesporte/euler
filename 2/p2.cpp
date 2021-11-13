#include <iostream>
#include <vector>

int main(int argc, char const *argv[]) {
  std::vector<int> terms;
  terms.push_back(1);
  terms.push_back(2);
  
  int even_sum = 2;

  while (terms.back() < 4000000) {
    int new_term = terms[terms.size()-1] + terms[terms.size()-2];
    if (new_term%2 == 0) {
      even_sum += new_term;
    }
    terms.push_back(new_term);
  }
  std::cout << "the sum of all even terms\nin the fibonacci sequence whose values\ndo not exceed 4,000,000 is " << even_sum << '\n';
  return 0;
}
