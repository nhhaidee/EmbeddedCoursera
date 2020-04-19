/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 * Modidy and add more code by Hai Nguyen (Coursera)
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"
#include "stdlib.h"


/* Size of the Data Set */
#define SIZE (40)


int compare(const void * a, const void * b) 
{
   return (*(unsigned char*)b - *(unsigned char*)a);
}

void sort_array(unsigned char * ptr)
{
  int i;
  qsort(ptr, SIZE, sizeof(unsigned char), compare);
  printf("Sorted Array (Descending):");
  for(i = 0 ; i < SIZE; i++ ) 
  {   
    printf("%u ", *ptr);
    ptr++;
  }
  printf("\n");
}

float find_median(unsigned char * ptr)
{
  sort_array(ptr);
  if (SIZE % 2 != 0)
    return (float)ptr[SIZE/2];
  else
    return (float)(ptr[(SIZE-1)/2] + ptr[SIZE/2])/2.0;
}
void print_array(unsigned char * ptr)
{
  int i;
  printf("Unsorted Array:");
  for (i = 0; i < SIZE ; i++)
  {
    printf("%u ", *ptr);
    ptr++;
  }
  printf("\n");
}

void print_statistics(unsigned char * ptr)
{
  printf("********Array Statistics***********\n");
  printf("Minimum value of array: %u\n", find_minimum(ptr));
  printf("Maximum value of array: %u\n", find_maximum(ptr));
  printf("Mean value of array: %0.2f\n", find_mean(ptr));
  printf("Median value of array: %0.2f\n", find_median(ptr));
}

float find_mean(unsigned char * ptr)
{
  int i;
  int sum = 0;
  for (i = 0; i < SIZE ; i++)
  {
    sum += *ptr;
    ptr++;
  }

  return (float)(sum/SIZE);
}

unsigned char find_minimum (unsigned char * ptr)
{
  int i;
  unsigned char min_value  = *ptr;
  for (i = 0; i < SIZE ; i++)
  {
    if (min_value >= *ptr)
    {
      min_value = *ptr;
    }
    ptr++;
  }
  return min_value;
}
unsigned char find_maximum (unsigned char * ptr)
{
  int i;
  unsigned char max_value  = *ptr;
  for (i = 0; i < SIZE ; i++)
  {
    if (max_value <= *ptr)
    {
      max_value = *ptr;
    }
    ptr++;
  }
  return max_value;
}

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  print_array(test); // Print original array
  print_statistics(test); // Print statistic of array inluding sort array in descending order
}


