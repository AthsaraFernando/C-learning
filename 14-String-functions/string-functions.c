#include <stdio.h>
#include <string.h>
 
int main() {
  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  printf("Length is: %d\n", strlen(alphabet));
  printf("Size is: %d\n", sizeof(alphabet));
  printf("_______________\n");
  char alphabet2[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  printf("%d\n", strlen(alphabet2));   // 26
  printf("%d\n", sizeof(alphabet2));   // 50

  printf("also there are \"cat\" for concatination, \"cpy\" for copy and many more");
return 0;
}


