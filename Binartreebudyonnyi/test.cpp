#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstdlib>
#include <string.h>

using namespace std;


float  *read_from_file(float *massivus, int n) {  
	int i = 0;
	float x = 0;
	float* p; 
	p = massivus;
	if (!(p = (float*)malloc(n * sizeof(float)))) {  
	printf("There is no memory for this masive!");
		return (p);
	}
	else {
	FILE* fp;
	fp = fopen("tree.txt", "r");  
	if (fp == NULL) {
		printf("file not found");
	}
	else {
		for (i = 0; i < n; i++) {
			fscanf(fp, "%f", &x);   
			*((float*)p + i) = x;    
			}
		}
fclose(fp);
	return (p);
}
}


int main()
{
	float *massivus;
	massivus = (float*)malloc(5 * sizeof(float));
	massivus = read_from_file(massivus,5);
	int j = 0;
	for (j = 0;j<5;j++){
		float y = *((float*)massivus + j);
		printf("%8.2f",y);
	}
		
}


