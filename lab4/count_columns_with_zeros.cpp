#include "count_columns_with_zeros.h"

int count_columns_with_zeros(int** matrix, int rows, int cols) {
  int count = 0;
  for (int j = 0; j < cols; j++) {
    for (int i = 0; i < rows; i++) {
      if (matrix[i][j] == 0) {
        count++;
        break;
      }
    }
  }
  return count;
}