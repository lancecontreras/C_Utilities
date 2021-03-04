#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "cutil.h"

int test_substring()
{
  char *text = "the quick brown fox jumps over the lazy dog"; 
  char *result = malloc(5 * sizeof(char*)); 
  int bResult = string_sub(text, 4, 5, result); 

  if(bResult != 0)
  {
    printf("error"); 
    return -1; 
  }

  if(strcmp(result, "quick"))
  {
    printf("passed");
    return 0; 
  }
  printf("failed"); 
  return -1; 
}

int main() 
{
  test_substring();
  

}