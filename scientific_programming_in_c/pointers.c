#include <stdio.h>
#include <stdlib.h>

void change_value_without_point(int n){
	n=3;
}

void change_value(int *n){
	*n=42;
}

int main(){
	double x = 1.3258983;
	double *y=&x;
	
	printf("x = %f\n", x);
	
	*y=2.0245253;
	printf("x = %f\n", x);

	int n=1;
	printf("n = %i\n",n);
	
	change_value_without_point(n);
	printf("n = %i\n",n);
	
	change_value(&n);
	printf("n = %i\n",n);

	size_t M=20, N=10;
	size_t i;
	double **p=NULL;

	p=malloc(M*sizeof(double *));
	for (i=0;i<M;i++){
		p[i]=malloc(N*sizeof(double));
		printf("\t\n %f", p[i]);
	}
		

	for (i=0;i<M;i++) free(p[i]);
	free(p);
}
