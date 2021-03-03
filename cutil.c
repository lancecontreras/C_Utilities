#include<stdio.h> 
#include<stdlib.h>
#include<string.h>

int string_sub(char *str_val, int begin, int count, char *str_result)
{
  char result[count]; 
  int length = strlen(str_val);
  
  for(int i = begin; i < length && (i-begin) < count; i++)
    result[i-begin] = str_val[i]; 

  strncpy(str_result, result, count); 
  return 0; 
}
