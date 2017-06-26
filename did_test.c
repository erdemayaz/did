#include "did.h"

/* Developed by Erdem AYAZ.
 * It was created on June 26th 2017.
 *
 * Test program.
 */
 
int main(void){
	//int target[] = {2,4,8,14,22,32,44,58,74,92,112,134,158};
	int target[] = {4,9,16,25,36,49,64,81,100,121,144};
	int x = estimate_next(target, 11);
	printf("%d", x);
	return 0;
}
