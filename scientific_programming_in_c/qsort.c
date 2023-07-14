#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare_double(const void *ap, const void *bp){
	const double *a=(const double *) ap;
	const double *b=(const double *) bp;

	if(*a<*b)
		return -1;
	else if (*a==*b)
		return 0;
	else
		return 1;
}

int main(){
	int i;
	double a[6]={3.59242434,9142.219521,0.1239124,1.99999999,1.9988, M_PI};

	printf("Array is::\n");
	for(i=0;i<6;i++)
		printf("a[%i]=%e\n",i,a[i]);
	printf("\n");

	qsort(a,6,sizeof(double), compare_double);

	printf("Array sorted::\n");
	for(i=0;i<6;i++)
		printf("a[%i]=%e\n",i,a[i]);
	return 0;

}
