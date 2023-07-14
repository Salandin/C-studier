#include <omp.h>
#include <stdio.h>

int main(){
	int i = 0;
	
#pragma omp parallel
	i++;
	printf("i==%i\n",i);
}

