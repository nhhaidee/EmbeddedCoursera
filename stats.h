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
 * @file stats.h 
 * @author Hai Nguyen
 * print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.
 * print_array() - Given an array of data and a length, prints the array to the screen
 * find_median() - Given an array of data and a length, returns the median value
 * find_mean() - Given an array of data and a length, returns the mean
 * find_maximum() - Given an array of data and a length, returns the maximum
 * find_minimum() - Given an array of data and a length, returns the minimum
 * sort_array() - Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
 * @date April 19, 2020
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief <Function to print statistics of array (max, min, mean, median)>
 * @param:
 *    unsigned char  * ptr: Pointer to a data set
 * @return Print max, min, mean, median of array
 */
void print_statistics(unsigned char * ptr);

/**
 * @brief <Function to print elements of array>
 * @param:
 *    unsigned char  * ptr: Pointer to a data set
 * @return print elements of array
 */
void print_array(unsigned char * ptr);

/**
 * @brief <Function to find median of array>
 * @param:
 *    unsigned char  * ptr: Pointer to a data set
 * @return median of array
 */
float find_median(unsigned char * ptr);

/**
 * @brief <Function to find mean of array>
 * @param:
 *   unsigned char * ptr: Pointer to a data set
 * @return mean of array
 */
float find_mean(unsigned char * ptr);

/**
 * @brief <Function to find minimum of array>
 * @param:
 *    unsigned char  * ptr: Pointer to a data set
 * @return minimum of array
 */
unsigned char find_minimum (unsigned char * ptr);

/**
 * @brief <Function to find maximum of array>
 * @param:
 *    unsigned char  * ptr: Pointer to a data set
 * @return maximum of array
 */
unsigned char find_maximum (unsigned char * ptr);

/**
 * @brief <Functions to sort array in descending order>
 * @param:
 *    unsigned char  * ptr: Pointer to a data set
 * @return sorted array in descending order
 */
int compare (const void * a, const void * b);
void sort_array(unsigned char * ptr);

#endif /* __STATS_H__ */
