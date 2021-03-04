#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
#include "cutil.h"

int string_sub(char *str_val, int begin, int count, char *str_result)
{
  char result[count]; 
  int length = strlen(str_val);
  
  for(int i = begin; i < length && (i-begin) < count; i++)
    result[i-begin] = str_val[i]; 

  strncpy(str_result, result, count); 
  return 0; 
}

int string_trim_left(char *str_val, char *result)
{
  int i = 0; 

  while(str_val[i] == ' ')    
  {
    i++; 
  }

  result = &str_val[i]; 

  return 0; 
}
