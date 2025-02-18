#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int a[3][3] = {
  { 1, 2, 3 },
  { 4, 5, 6 },
  { 7, 8, 9 }
  };

  // Print the size of the a array
  printf("size of a: %zu bytes\n", sizeof(a));

  // Print the size of a single integer
  printf("size of int: %zu bytes\n", sizeof(int));

  // Print the number of elements in the a array
  printf("element count: %zu\n", sizeof(a) / sizeof(int));

  // Create a Multi-Dimensional Array

  printf("the size of an int pointer is %zu bytes\n", sizeof(int*));

  int **b = malloc(3 * sizeof(int *));
  for (int i = 0; i < 3; i++) {
    b[i] = malloc(3 * sizeof(int));
  }

  b[0][0] = 1;
  b[0][1] = 2;
  b[0][2] = 3;
 
  b[1][0] = 4;
  b[1][1] = 5;
  b[1][2] = 6;
 
  b[2][0] = 7;
  b[2][1] = 8;
  b[2][2] = 9;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("b[%i][%i] = %d\n", i, j, b[i][j]);
    }
  }

  if (b) {

    free(b);
  }
 
  return 0;
}