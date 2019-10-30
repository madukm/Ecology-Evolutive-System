#include "reference.h"

float randomize_0_1(void){
  return ((float)rand())/(float)RAND_MAX;
}

float randomize_0_10(void){
  return ((float)rand())/(float)(RAND_MAX/10);
}
