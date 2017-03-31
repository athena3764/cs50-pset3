/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include "helpers.h"

/**
 * Use binary search to check if value is in array of n values.
 * Returns true if value is in the array, else false.
 * 
 */
 
bool search(int key, int values[], int min, int max){
    if (max < min){
        return false;
    }
    int midpoint = (min + max)/2;
    if (key == values[midpoint]){
        return true;
    }
    else if (values[midpoint] < key){ 
        return search(key, values, midpoint + 1, max);
    }
    else{
		return search(key, values, min, midpoint - 1);
	}
};
        
/**
 * Sorts array of n values using bubble sort.
 */

void sort(int values[], int n){
	for (int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - i - 1; j++){
			if (values[j] > values[j+1])
			{
				int temp = values[j];
				values[j] = values[j+1];
				values[j+1] = temp;    
			}
		}
	}
};
