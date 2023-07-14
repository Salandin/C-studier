#include <stdlib.h>

#define idx(arr,i,j) ((j)*arr.M+(i))
#define el(arr,i,j) (arr.p[idx(arr, i,j)])

int main(){
	struct array {
		size_t M;
		size_t N;
		double *p;
	};
	struct array a; a.M=10; a.N=20;
	a.p=malloc(idx(a,a.M,a.N)*sizeof(double));
	free(a.p);

}
