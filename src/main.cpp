#include "sudoku.h"
#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
  int grid[9][9], *put = (int*)grid;
  std::fstream strm;

  if(argc != 2)
  {
    std::cout << "Error: invalid number of arguments, just specify the filename for the unsolved grid\n";
    return 1;
  }
  
  strm.open(argv[1]);

  if(!strm.is_open())
  {
    std::cout << "Error: couldn't open file\n";
    return 1;
  }

  for(char c; !strm.eof(); strm >> c) {
    if(c >= '0' &&  c <= '9') {
      *put++ = c - '0';
    }
  }
  std::cout << "\nPuzzle entered was: \n\n";
  print_sudoku_grid(grid);
  
  std::cout << "\nSolving....\n";
 
  if(solve_sudoku(grid, 0, 0)) {
    std::cout << "\nSolution:\n";
    print_sudoku_grid(grid);
  } else {
    std::cout << "Failed to Solve\n";
  }
  
  return 0;
}

