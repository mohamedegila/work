/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file statistical analytics application 
 * @brief This is a simple application that performs statistical analytics on adataset
 *
 * @author Mohammed Egila
 * @date 21/7/2017
 *
 */

#ifndef __STATS_H__
#define __STATS_H__

void sort_array(unsigned char *ptr,int size);

/**
 * @brief sorts the array from largest to smallest
 *
 * This function that Given an array of data and a length, sorts the array from largest to smallest
 *
 * @param pointer to char point to a given array to be sorted
 * @param size of a given array 
 * @return void
 */

void print_array(unsigned char *ptr,int size);

/**
 * @brief prints the array to the screen
 *
 * This function that Given an array of data and a length, prints the array to the screen in a good form
 *
 * @param pointer to char point to a given array to be printed
 * @param size of a given array 
 * @return void
 */

unsigned char find_maximum(unsigned char *ptr,int size);

/**
 * @brief finds the maximum number in an array
 *
 * This function that Given an array of data and a length,returns the maximum
 *
 * @param pointer to char point to a given array to find the maximum 
 * @param size of a given array 
 * @return the maximum
 */

unsigned char find_minimum(unsigned char *ptr,int size);

/**
 * @brief finds the minimum number in an array
 *
 * This function that Given an array of data and a length,returns the minimum
 *
 * @param pointer to char point to a given array to find the minimum 
 * @param size of a given array 
 * @return the minimum
 */

unsigned char find_median(unsigned char *ptr,int size);

/**
 * @brief finds the median value in an array
 *
 * This function that Given an array of data and a length,returns the median
 *
 * @param pointer to char point to a given array to find the median 
 * @param size of a given array 
 * @return the median value
 */

unsigned char find_mean(unsigned char *ptr,int size);

/**
 * @brief finds the mean value in an array
 *
 * This function that Given an array of data and a length,returns the mean
 *
 * @param pointer to char point to a given array to find the mean 
 * @param size of a given array 
 * @return the mean value
 */

void print_statistics(unsigned char *ptr,int size);

/**
 * @brief  prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * A function that prints the statistics of an array including minimum, maximum, mean, and median
 *
 * @param pointer to char point to a given array to find the mean 
 * @param size of a given array 
 * @return void
 */

#endif /* __STATS_H__ */
