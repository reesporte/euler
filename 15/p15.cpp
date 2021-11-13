/*
project euler problem 15
*/
#include <iostream>

long pathCounter(const int gridSize){
  /*
  counts number of paths by starting at bottom of grid and moving up, adding
  possible paths until you reach 0,0 where you return
  */

  long grid[gridSize+1][gridSize+1];

  for (int i = 0; i < gridSize; i++) {
    grid[i][gridSize] = 1;
    grid[gridSize][i] = 1;
  }

  for (int row = gridSize-1; row >= 0; row--) {
    for (int col = gridSize-1; col >= 0; col--) {
      grid[row][col] = grid[row+1][col] + grid[row][col+1];
    }
  }

  return grid[0][0];

}

int main(int argc, char const *argv[]) {
  std::cout << pathCounter(20) << '\n';
  return 0;
}
