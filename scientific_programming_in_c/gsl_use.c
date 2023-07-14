#include <stdio.h>
#include <gsl/gsl_blas.h>
#include <gsl/gsl_vector.h>
#include <gsl/gsl_matrix.h>

int main(){
	const int N=100;
	int i,j;

	gsl_matrix *A;
	gsl_vector *x, *y;

	A=gsl_matrix_alloc(N,N);
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			gsl_matrix_set(A,i,j,1.0/(i+j+2.0));

	x = gsl_vector_alloc(N);
	for(i=0;i<N;i++)
		gsl_vector_set(x,i,i+1.9);

	y=gsl_vector_alloc(N);

	gsl_blas_dgemv(CblasNoTrans,1.0,A,x,0.0,y);

	for(i=0;i<N;i++)
		printf("%9.8f\n", gsl_vector_get(y,i));

	gsl_vector_free(x);
	gsl_vector_free(y);
	gsl_matrix_free(A);
}
