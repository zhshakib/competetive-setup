/*
@Author: ZH Shakib
@Date: 28-01-2024
** Find Sum of Diagonal Elements
** of a Square Matrix
*/

#include <stdio.h>

int main() {
  int m, n;
  printf("Enter M X N Matrix Size: ");
  scanf("%d %d", &m, &n);

  int Box[m][n], row, col, sum = 0;
  int primaryDiagonal = 0, secondaryDiagonal = 0;
  for (int row = 0; row < m; row++) {
    for (int col = 0; col < n; col++) {
      scanf("%d", &Box[row][col]);

      // select diagonal elements and put them in sum
      if (row == col) {
        primaryDiagonal += Box[row][col];
      }

      if (row + col == n - 1) {
        secondaryDiagonal += Box[row][col];
      }

      // sum without common element
      if (row == col || row + col == n - 1) {
        sum += Box[row][col];
      }
    }
  }

  int sumofboth = primaryDiagonal + secondaryDiagonal;

  printf("Primary Diagonal \t\t= %d\n", primaryDiagonal);
  printf("Secondary Diagonal \t\t= %d\n", secondaryDiagonal);

  if (sumofboth == sum) {
    printf("Sum of both diagonals \t\t= %d\n", sumofboth);
  } else {
    printf("Sum of both diagonals \t\t= %d\n", sumofboth);
    printf("Sum without common element \t= %d\n", sum);
  }

  return 0;
}