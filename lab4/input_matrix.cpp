#include "iostream"
#include "input_matrix.h"

void input_matrix(int matrix[][30], int rows, int cols)
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      std::cin >> matrix[i][j];
    }
  }
}