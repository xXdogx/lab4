#include "iostream"
#include "count_columns_with_zeros.h"

int count_parallel_diagonals_without_zeros(int** matrix, int size)
{
  int count = 0;
  for (int i = 0; i < 2 * size - 1; i++) {
    bool has_zero = false;
    for (int j = 0; j < size; j++) {
      int k = i - j;
      if (k >= 0 && k < size) {
        if (matrix[j][k] == 0) {
          has_zero = true;
          break;
        }
      }
    }
    if (!has_zero) {
      count++;
    }
  }
  return count;
}




