#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "array_utils.h"

int main(int argc, char **argv) {

  //seed the random number generator with the current time
  // srand(time(NULL));

  // int n = 10;
  // int *arr = generateRandomArray(n);
  // printArray(arr, n);

  // int sum = getSum(arr, n);
  // printf("sum of elements = %d\n", sum);
  // printArray(arr, n);

  // free(arr);

  // return 0;
  
  //seed the random number generator with the current time
  srand(time(NULL));

  int n = 10;
  int *arr = generateRandomArray(n);
  printArray(arr, n);
  // get sum of all element
  int sum = getSum(arr, n);
  printf("sum of elements = %d\n", sum);
  // Function print array
  printArray(arr, n);
  // function get the Mean of Number
  double mean= getMean(arr, n);
  // Check the function return valid number
  if(mean!= -1){
  printf("The mean of Numbers as %f\n",mean);
  }
  // Function return min of the number
  int min = getMin(arr, n);
  // check validaty
  if(min != -1){
    printf("The minimum as %d\n",min);
  }
}
 // Function to find minimum number index number
  int minIndex = getIndexOfMin(arr, n);
  if(minIndex != -1){
    printf("The Index of Minimuim number as %d\n",minIndex);
  }
  int max = getMax(arr, n);
  if(max!= -1){
    printf("Max number in array %d\n",max);
  }
  int maxIndex = getIndexOfMax(arr, n);
  if(maxIndex != -1){
    printf("The max number index as %d\n",maxIndex);
  }
  // Limite/boundry
  int threshold = 35;
  // for dynamic memory array size 
  int resultSize = 0;
  // the ponter which store the dynamic array(filterArray from funtion address)
  int *filterArray = filterThreshold(arr, n, threshold, &resultSize);
  // Check valididty
  if(filterArray != NULL){
    printf("ThresholdResult: ");
    for(int i = 0; i<resultSize; i++){
      printf("%d ",filterArray[i]);
    }