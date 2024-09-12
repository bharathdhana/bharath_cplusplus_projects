#include <iostream>
using namespace std;

void Read(int **matrix, int rows, int cols) {
  cout << "Enter the elements of the matrix:" << endl;
  for (int i = 0; i < rows; i++) {
    cout << "Row " << i + 1 << ":" << endl;
    for (int j = 0; j < cols; j++) {
      cout << "Cols " << j + 1 << ": ";
      cin >> matrix[i][j];
    }
  }
}

void Add(int **matrix1, int **matrix2, int **result, int rows, int cols) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      result[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }
}

void Display(int **result, int rows, int cols) {
  cout << "Resultant Matrix:" << endl;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << result[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  int rows, cols;

  cout << "Enter the number of rows and columns for the matrices: ";
  cin >> rows >> cols;

  int **matrix1 = new int *[rows];
  int **matrix2 = new int *[rows];
  int **result = new int *[rows];

  for (int i = 0; i < rows; i++) {
    matrix1[i] = new int[cols];
    matrix2[i] = new int[cols];
    result[i] = new int[cols];
  }

  cout << "Read First Matrix" << endl;
  Read(matrix1, rows, cols);
  cout << "Read Second Matrix" << endl;
  Read(matrix2, rows, cols);
  cout << "Addition of Matrices" << endl;
  Add(matrix1, matrix2, result, rows, cols);

  cout << "Displaying matrices" << endl;
  Display(result, rows, cols);

  return 0;
}
