#include "sudoku.h"
#include <iostream>

bool solve_sudoku(int grid[9][9], int row, int col) {
  if(row == 8 && col == 9) {
    return true;
  }
  
  if(col == 9) {
    row++;
    col = 0;
  }

  if(grid[row][col] > 0) {
    return solve_sudoku(grid, row, col + 1);
  }

  for(int num = 1;num <= 9;num++) {
    if(valid_sudoku(grid, row, col, num)) {
      grid[row][col] = num;
      if(solve_sudoku(grid, row, col + 1)) {
        return true;
      }
    }
    grid[row][col] = 0;
  }

  return false;
}

bool valid_sudoku(int grid[9][9], int row, int col, int num) {
  for(int i = 0;i < 9;i++) {
    if(grid[row][i] == num) {
      return false;
    }
  }

  for(int i = 0;i < 9;i++) {
    if(grid[i][col] == num) {
      return false;
    }
  }

  int startRow = row - row % 3, startCol = col - col % 3;
  for(int i = 0;i < 3;i++) {
    for(int j = 0;j < 3;j++) {
      if(grid[i + startRow][j + startCol] == num) {
        return false;
      }
    }
  }
  return true;
}

void print_sudoku_grid(int grid[9][9])
{
  std::cout << "+-----------------------+\n";
  for(int i = 0; i < 9; i++)
  {
    for(int j = 0;j < 9;j++) {
      if(j % 3 == 0) {
        std::cout << "| ";
      }      
      if(j == 8) {
        std::cout << grid[i][j] << " |";
      } else {
        std::cout << grid[i][j] << " ";
      }
    }
    std::cout << "\n";
    if((i + 1) % 3 == 0 && i != 8)
      std::cout << "|-------+-------+-------|\n";
  }
  std::cout << "+-----------------------+\n";
  std::cout.flush();
}

