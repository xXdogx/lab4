#include "iostream"
#include "count_colums_without_zeros.h"

int count_columns_without_zeros(int matrix[][30], int rows, int cols)
{
  int countV = 0;
  for (int j = 0; j < cols; j++)
  {
    bool has_zero = false;
    for (int i = 0; i < rows; i++)
    {
      if (matrix[i][j] == 0)
      {
        has_zero = true;
        break;
      }
    }
    if (has_zero)
    {
      countV++;
    }
  }
  return countV;
}