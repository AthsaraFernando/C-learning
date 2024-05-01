#include<stdio.h>
#include<stdlib.h>

// EXAMPLE 1- The pointer is overwritten:

int main(){
  int x = 5;
  int *ptr;
  ptr = calloc(2, sizeof(*ptr));
  ptr = &x; 
}
