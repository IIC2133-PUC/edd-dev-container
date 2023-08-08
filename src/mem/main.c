#include <stdlib.h>

void modify(int index, int value, int *array) {
  array[index] = value;
}

int main() {
  int size = 5;
  int *arr = calloc(size, sizeof(int));

  modify(2, 1, arr);
  // free(arr)
}
