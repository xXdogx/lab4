#include <iostream>
#include <fstream>
#include "input_dynamic_matrix.h"

int** input_dynamic_matrix() {
  std::ifstream input_file("input.txt");
  int dimension;
  input_file >> dimension;
  int** dyn_matrix = new int* [dimension];
  for (int i = 0; i < dimension; i++) {
    dyn_matrix[i] = new int[dimension];
    for (int j = 0; j < dimension; j++) {
      input_file >> dyn_matrix[i][j];
    }
  }
  input_file.close();
  return dyn_matrix;
}