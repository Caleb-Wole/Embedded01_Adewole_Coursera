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
 * @file stats.h 
 * @brief Header file containing statistics function prototypes
 *
 * This .h file contains the prototypes for the
 * various functions defined in the stats.c file.
 * It also contain descriptions of what those 
 * functions do.
 *
 * @author Caleb Adewole
 * @date Sept. 6, 2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints four basic statistics of the input array
 *
 * This function prints the minimum, maximum, mean and
 * median values of the input array. 
 *
 * @param arrayPtr A pointer to the array
 * @param length   Size of the array
 *
 * @return Does not return anything
 */
void print_statistics(unsigned char *arrayPtr, unsigned int length);


/**
 * @brief Prints out all the elements of the array
 *
 * The print_array function loops over the array
 * using its pointer and prints all the numbers
 * in the array.
 * 
 * @param arrayPtr A pointer to the array
 * @param length   size of the array
 *
 * @return Returns nothing
 */
void print_array(unsigned char *arrayPtr, unsigned int length);


/**
 * @brief Calculates the median value of the numbers in array
 *
 * This function first calls the sort_array function with 
 * the arrayPtr and length param. This sorts the array.
 * Then, the two mid-value of the array are summed after 
 * their derefencing their pointers. Finally, the function 
 * divides the sum by 2 and the result is returned.
 *
 * @param arrayPtr A pointer to the array
 * @param length   Size of the array
 *
 * @return The resulting median from the preceding 
 * calculation
 */
unsigned char find_median(unsigned char *arrayPtr, unsigned int length);


/**
 * @brief Calculates the mean value of the numbers in array
 *
 * This function sums all the element of the array 
 * and divides by the length(or size) of the array.
 * It returns the result as the mean.
 *
 * @param arrayPtr A pointer to the array
 * @param length   Size of the array
 *
 * @return The  mean of the array of numbers
 */
unsigned char find_mean(unsigned char *arrayPtr, unsigned int length);


/**
 * @brief Gives the maximum number value in the array
 *
 * The find_maximum function originally assigns
 * the first element of the array as the max value.
 * Then it iteratively compares subsequent element
 * with that first element and with each other 
 * in order to get the actual maximum value
 * in the array.
 *
 * @param arrayPtr A pointer to the array
 * @param length   Size of the array
 *
 * @return The maximum value in the array
 */
unsigned char find_maximum(unsigned char *arrayPtr, unsigned int length);

/**
 * @brief Gives the maximum number value in the array
 *
 * The find_minimum function originally assigns
 * the first element of the array as the minimum
 * value. Then it iteratively compares subsequent element
 * with that first element and with each other 
 * in order to get the actual minimum value
 * in the array.
 *
 * @param arrayPtr A pointer to the array
 * @param length   Size of the array
 *
 * @return The minimum value in the array
 */
unsigned char find_minimum(unsigned char *arrayPtr, unsigned int length);



/**
 * @brief Sorts the array in descending order
 *
 * First, the function compares each element with 
 * every other element in the array in order to
 * place them in the riht location in terms of size.
 * Bigger numbers are placed at the beginning 
 * while smaller numbers are placed at the
 * end of the array. The result is an array 
 * sorted in descending order.
 *
 * @param arrayPtr A pointer to the array
 * @param length   Size of the array
 *
 * @return void
 */
void sort_array(unsigned char *arrayPtr, unsigned int length);

#endif /* __STATS_H__ */
