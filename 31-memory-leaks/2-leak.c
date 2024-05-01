#include<stdio.h>
#include<stdlib.h>

//EXAMPLE 2 - The pointer exists only inside a function:
int main(){

  void myFunction() {
    int *ptr;
    ptr = malloc(sizeof(*ptr));
  }

  int main() {
    myFunction();
    printf("The function has ended");
    return 0;
  } 	

}
