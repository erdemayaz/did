//Bismillahirrahmanirahim
//Developed by Erdem AYAZ
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <math.h>

void maxParse(int a[]);

int main(){
	
	int a[10];
	maxParse(a);
	return 0;
}

void maxParse(int a[]){
	
	int d[11];
	int d2[10];
	int d3[10];
	int d4[10];
	int d5[10];
	int d6[10];
	int d7[10];
	int d8[10];
	int d9[10];
	int d10[10];
	
	srand(time(NULL));
	int random;

	a[0] = 1;
	a[1] = 1;
	a[2] = 2;
	a[3] = 3;
	a[4] = 5;
	a[5] = 8;
	a[6] = 13;
	a[7] = 21;
	a[8] = 34;
	a[9] = 55;
	int i;
	for(i = 0; i < 10; i++){
		random = rand()%10;
		
		//a[i] = random;
		a[i] = ((i*i) + 5*i) +i - 23;
		printf("%d", a[i]);
		printf(",");
	}
	
	
	printf("\n\n\n");
	
	for(i = 0; i < 9; i++){
		d[i] = a[i + 1] - a[i];
		printf("%d", d[i]);
		printf(",");
	}
	
	printf("\n\n\n");
	
	for(i = 0; i < 8; i++){
		d2[i] = d[i + 1] - d[i];
		printf("%d", d2[i]);
		printf(",");
	}
	
	printf("\n\n\n");
	
	for(i = 0; i < 7; i++){
		d3[i] = d2[i + 1] - d2[i];
		printf("%d", d3[i]);
		printf(",");
	}
	
	printf("\n\n\n");
	
	for(i = 0; i < 6; i++){
		d4[i] = d3[i + 1] - d3[i];
		printf("%d", d4[i]);
		printf(",");
	}
	
	printf("\n\n\n");
	
	for(i = 0; i < 5; i++){
		d5[i] = d4[i + 1] - d4[i];
		printf("%d", d5[i]);
		printf(",");
	}
	
	printf("\n\n\n");
	
	for(i = 0; i < 4; i++){
		d6[i] = d5[i + 1] - d5[i];
		printf("%d", d6[i]);
		printf(",");
	}
	
	printf("\n\n\n");
	
	for(i = 0; i < 3; i++){
		d7[i] = d6[i + 1] - d6[i];
		printf("%d", d7[i]);
		printf(",");
	}
	
	printf("\n\n\n");
	
	for(i = 0; i < 2; i++){
		d8[i] = d7[i + 1] - d7[i];
		printf("%d", d8[i]);
		printf(",");
	}
	
	printf("\n\n\n");
	
	for(i = 0; i < 1; i++){
		d9[i] = d8[i + 1] - d8[i];
		printf("%d", d9[i]);
		printf(",");
	}
	
	d9[1] = d9[0];
	
	printf("\n\n\n-----------------------\n\n\n");
	
	d10[0] = d9[1] - d9[0];
	printf("%d", d10[0]);
	printf(",");
	
	printf("\n\n\n");
	
	for(i = 0; i < 2; i++){
		d9[i + 1] = d10[i] + d9[i];
		printf("%d", d9[i]);
		printf(",");
	}
	
	printf("\n\n\n");
	
	for(i = 0; i < 3; i++){
		d8[i + 1] = d9[i] + d8[i];
		printf("%d", d8[i]);
		printf(",");
	}
	
	printf("\n\n\n");
	
	for(i = 0; i < 4; i++){
		d7[i + 1] = d8[i] + d7[i];
		printf("%d", d7[i]);
		printf(",");
	}
	
	printf("\n\n\n");
	
	for(i = 0; i < 5; i++){
		d6[i + 1] = d7[i] + d6[i];
		printf("%d", d6[i]);
		printf(",");
	}
	
	printf("\n\n\n");
	
	for(i = 0; i < 6; i++){
		d5[i + 1] = d6[i] + d5[i];
		printf("%d", d5[i]);
		printf(",");
	}
	
	printf("\n\n\n");
	
	for(i = 0; i < 7; i++){
		d4[i + 1] = d5[i] + d4[i];
		printf("%d", d4[i]);
		printf(",");
	}
	
	printf("\n\n\n");
	
	for(i = 0; i < 8; i++){
		d3[i + 1] = d4[i] + d3[i];
		printf("%d", d3[i]);
		printf(",");
	}
	
	printf("\n\n\n");
	
	for(i = 0; i < 9; i++){
		d2[i + 1] = d3[i] + d2[i];
		printf("%d", d2[i]);
		printf(",");
	}
	
	printf("\n\n\n");
	
	for(i = 0; i < 10; i++){
		d[i + 1] = d2[i] + d[i];
		printf("%d", d[i]);
		printf(",");
	}
	
	printf("\n\n\n");
	
	for(i = 0; i < 11; i++){
		a[i + 1] = d[i] + a[i];
		printf("%d", a[i]);
		printf(",");
	}
}

