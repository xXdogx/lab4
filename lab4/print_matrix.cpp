#include <iostream>
#include "print_matrix.h"

void print_matrix(int matrix[][100], int rows, int cols)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      std::cout << matrix[i][j] << ' ';
    }
    std::cout << '\n';
  }
}