#include <stdio.h>
#include <stdlib.h>

int wnint(const double *x);

int main(int argc, char **argv){
	double d;

	if(argc!=2){
		printf("Usage:: %s  value\n", argv[0]);
		return 1;
	}

	d=atof(argv[1]);

	printf("%e  rounded to the closest integer %i. \n",\
			d, wnint(&d));

}
