#include<stdio.h>
#include<stdlib.h>

//EXAMPLE 3- The pointer gets lost when reallocation fails:
int main(){

  int* ptr;
  ptr = malloc(sizeof(*ptr));
  ptr = realloc(ptr, 2*sizeof(*ptr)); 

}
