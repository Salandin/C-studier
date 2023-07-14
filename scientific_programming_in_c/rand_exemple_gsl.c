#include <stdio.h>
#include <gsl/gsl_rng.h>

int main(){
	const int n = 5;
	gsl_rng * r;
	int i;

	r = gsl_rng_alloc(gsl_rng_minstd);
	for(i=0;i<n;i++){
		double u = gsl_rng_uniform (r);
		printf("%.9f\n",u);
	}

	gsl_rng_free(r);
}
