/*
project euler problem 17
*/
#include <iostream>
#include <string.h>
using namespace std;

int solution(){
  int cache[1001] = {0};
  int sum = 0;
  cache[1] = strlen("one");
  cache[2] = strlen("two");
  cache[3] = strlen("three");
  cache[4] = strlen("four");
  cache[5] = strlen("five");
  cache[6] = strlen("six");
  cache[7] = strlen("seven");
  cache[8] = strlen("eight");
  cache[9] = strlen("nine");
  cache[10] = strlen("ten");
  cache[11] = strlen("eleven");
  cache[12] = strlen("twelve");
  cache[13] = strlen("thirteen");
  cache[14] = strlen("fourteen");
  cache[15] = strlen("fifteen");
  cache[16] = strlen("sixteen");
  cache[17] = strlen("seventeen");
  cache[18] = strlen("eighteen");
  cache[19] = strlen("nineteen");
  cache[20] = strlen("twenty");
  cache[30] = strlen("thirty");
  cache[40] = strlen("forty");
  cache[50] = strlen("fifty");
  cache[60] = strlen("sixty");
  cache[70] = strlen("seventy");
  cache[80] = strlen("eighty");
  cache[90] = strlen("ninety");

  for (int i = 21; i < 100; i++) {
    int tens_place = (i/10)*10;
    int ones_place = i - tens_place;
    cache[i] = cache[tens_place] + cache[ones_place];
  }

  for (int i = 100; i < 1000; i++) {
    int hundreds_place = i/100;
    int teens = i - (hundreds_place*100);
    if (teens == 0) {
      cache[i] = cache[hundreds_place] + strlen("hundred");
    }
    else{
      cache[i] = cache[hundreds_place] + strlen("hundredand") + cache[teens];
    }
  }

  cache[1000] = strlen("onethousand");

  for (size_t i = 1; i < 1001; i++) {
    sum += cache[i];
  }

  return sum;
}

int main(int argc, char const *argv[]) {
  cout << solution() << endl;
  return 0;
}
