#include <stdio.h>
#include "helpers/parson.h"
#include "helpers/parson.c"
int main() 
{
  printf("OK1");
  JSON_Value *root_value = json_value_init_object();
  //JSON_Object * root_object = json_value_get_object(root_value);
  //char *output_string=NULL;
  /*json_object_set_string(root_object,"name","Hemant");*/

  return 0;
}