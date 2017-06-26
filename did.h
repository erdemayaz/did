#ifndef did
#define did

/* Developed by Erdem AYAZ.
 * It was created on June 26th 2017.
 *
 * Difference in differences algorithm.
 */

// It calculates differences between array elements.
void diff(int length, int* d){
	if(length > 1){
		int j;
		int* temp = d + length + 1;
		for(j = 0; j < length - 1; j++){
			*(temp + j) = *(d + j + 1) - *(d + j);
		}
		diff(length - 1, temp);
	}
}

// reverse_diff calculates new differential value in same arrays.
void reverse_diff(int length, int iterator, int* d){
	int mtotal = ((length * (length + 1)) / 2);
	int sum_back = ((iterator * (iterator + 1)) / 2);
	int *temp_new = d + mtotal - sum_back - 1;
	int *temp_prev = temp_new - 1;
	int *temp_diff = temp_new + iterator;
	
	if(sum_back < mtotal){
		*temp_new = *temp_prev + *temp_diff;
		reverse_diff(length, ++iterator, d);
	}
}

/* This function is main function of header for did algorithm.
 * Firstly it finds length of given regular array.
 * And than it allocates space from memory. The allocated 
 * memory is triangular matrix. Recursively, it evaluates new values
 * for its differences.
 *
 */
int estimate_next(int* a, int length){
	
	int i, x, total, expanded_total;
	int *dynamic;

	total = ((length * (length + 1)) / 2);
	
	// Memory allocation for triangular matrix
	dynamic = (int*) malloc(total * sizeof(int));
	
	for(i = 0; i < length - 1; i++){
		*(dynamic + i) = *(a + i + 1) - *(a + i);
	}
	
	// Recursive differences
	diff(length - 1, dynamic);
	
	/* When the dynamic array expands, one more difference come up.
	 * It has to be zero.
	 */
	*(dynamic + total - 1) = 0;
	
	// Recursive reverse differences
	reverse_diff(length, 1, dynamic);
	
	/* Last element of lowest level differences of dynamic array
	 * adds to differences of given array.
	 */
	x = *(dynamic + length - 1);
	free(dynamic);
	
	return x + *(a + length - 1);
}

#endif did
