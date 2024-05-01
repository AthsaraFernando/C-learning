#include <stdio.h>
#include <stdlib.h>

int main() {

  int *ptr1, *ptr2;
  ptr1 = malloc(sizeof(*ptr1));
  ptr2 = calloc(1, sizeof(*ptr2));
  
  int *students;
  int numStudents = 12;
  students = calloc(numStudents, sizeof(*students));
  printf("%d", numStudents * sizeof(*students)); // 48 bytes
  
  return 0;
}
