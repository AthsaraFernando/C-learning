#include <stdio.h>

int main() {
  FILE *fptr;

  // Open a file in read mode
  fptr = fopen("test.txt", "r");

  // Store the content of the file
  char myString[100];

  // Read the content and store it inside myString
  fgets(myString, 100, fptr);

  // Print file content
  printf("%s", myString);  

fclose(fptr);
  printf("---------------\n");

   
  fptr = fopen("test.txt", "r");
  char myString2[100];
// Read the content and print it
while(fgets(myString2, 100, fptr)) {
  printf("%s", myString2);
}


fclose(fptr);

  return 0;
}

