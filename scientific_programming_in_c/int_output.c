#include <stdio.h>
#include <stdlib.h>
#include <time.h>

clock_t clock();

int main(){
	clock_t begin, end;
	double time_spent;

	begin=clock();
	end=clock();
	time_spent = (double) (end - begin) \
							 / CLOCKS_PER_SEC;

	printf("%e", time_spent);
}
