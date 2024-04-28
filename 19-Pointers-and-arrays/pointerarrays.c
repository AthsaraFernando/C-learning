#include <stdio.h>
 
int main() {
  int myNumbers[4] = {25, 50, 75, 100};

  // Get the value of the second element in myNumbers
  printf("%d\n", *(myNumbers + 1));

  // Get the value of the third element in myNumbers
  printf("%d\n", *(myNumbers + 2));
  printf("-----------\n");
  int *ptr = myNumbers;
  int i;

  for (i = 0; i < 4; i++) {
    printf("%d\n", *(ptr + i));
  }

  return 0;
}
