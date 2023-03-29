#include <iostream>
#include <fstream>
#include "print_matrix.h"
#include "count_parallel_diagonals_without_zeros.h"
#include "input_dynamic_matrix.h"
#include "input_matrix.h"
#include "print_matrix.h"
#include "count_colums_without_zeros.h"

int main(int argc, char* argv[]) {
  int rows, cols;
  std::cin >> rows >> cols;
  int matrix[30][30];
  input_matrix(matrix, rows, cols);
  int count = count_columns_without_zeros(matrix, rows, cols);
  std::cout << "Number of columns with at least one zero: " << count << '\n';

  std::ofstream output_file("output.txt");
  std::ifstream input_file("input.txt");
  int dimension;
  input_file >> dimension;
  int** dyn_matrix = input_dynamic_matrix();
  int countV = count_parallel_diagonals_without_zeros(dyn_matrix, dimension);
  output_file << "The number of side diagonals without zeros: " << countV;

  for (int i = 0; i < dimension; i++) {
    delete[] dyn_matrix[i];
  }
  delete[] dyn_matrix;

  return 0;
}