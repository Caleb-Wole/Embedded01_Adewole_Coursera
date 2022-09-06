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
 * @file stats.c 
 * @brief This file contains functions that compute the statistics of a data in an array.
 *
 * There are functions to calculate the mean, median, max and min of the array. Also there are functions to sort and print the array.
 *
 * @author Caleb Adewole
 * @date 30/07/2022
 *
 */


#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

   /* Other Variable Declarations Go Here */
  unsigned char *testPtr = test;
  unsigned int arrlength = SIZE;

  /* Statistics and Printing Functions Go Here */
  print_array(testPtr, arrlength);
  print_statistics(testPtr, arrlength);
}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char *arrayPtr, unsigned int length){
	printf("The min value is %u.\n", find_minimum(arrayPtr, length));
	printf("The max value is %u.\n", find_maximum(arrayPtr, length));
	printf("Mean value is %u.\n",find_mean(arrayPtr, length));
	printf("Median value is %u.\n", find_median(arrayPtr, length));

}

void print_array(unsigned char *arrayPtr, unsigned int length){
	int i;

	printf("The indexes of the numbers"
			" in the array with the"
		       " numbers themselves are"
		       " as follows: \n");
	for (i=0; i<length; i++){
		printf("%i: ", i+1);
		printf("%i \n", *arrayPtr);
		arrayPtr++;
	}

}

unsigned char find_median(unsigned char *arrayPtr, unsigned int length){
	sort_array(arrayPtr, length);

	int sumOfMiddleValues;
	unsigned char medianValue;
	sumOfMiddleValues = *(arrayPtr + length/2) + *(arrayPtr + (length/2 - 1));
	medianValue = sumOfMiddleValues/2;

	return medianValue;


}

unsigned char find_mean(unsigned char *arrayPtr, unsigned int length){
	int i;
	unsigned char meanValue;
	int elementSum = 0;
	
	for (i=0; i<length; ++i){
		elementSum += *arrayPtr;
		arrayPtr++;
	}
	meanValue = elementSum / length;
	return meanValue;


}

unsigned char find_maximum(unsigned char *arrayPtr, unsigned int length){
	unsigned char maxValue = *arrayPtr;

	for (int i=0; i<length; ++i){
		if (*(arrayPtr+i) > maxValue){
			maxValue = *(arrayPtr+i);
		}
	}
	return maxValue;

}

unsigned char find_minimum(unsigned char *arrayPtr, unsigned int length){
	unsigned char minValue = *arrayPtr;

	for (int i=0; i<length; ++i){
		if (*(arrayPtr+i) < minValue){
			minValue = *(arrayPtr+i);
		}
	}
	return minValue;
}

void sort_array(unsigned char *arrayPtr, unsigned int length){
	unsigned int i,j,temp;
	for (i=0; i<length; ++i){
		for (j=i+1; j<length; ++j){
			if (*(arrayPtr+i) < *(arrayPtr+j)){
				temp = *(arrayPtr+i);
				*(arrayPtr+i) = *(arrayPtr+j);
				*(arrayPtr+j) = temp;
			}
		}
	}

}


