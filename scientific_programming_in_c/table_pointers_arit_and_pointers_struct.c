#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	const int N=10;
	double p[N];
	double *q=p;

	for(i=0;i<N;i++){
		*(q++)=i;
	}
	for(i=0;i<N;i++){
		printf("%i %e\n",i,p[i]);
	}
	
	void *t=malloc(sizeof(double));
	float *ft=t;
	double *dt=t;

	ft++; dt++;
	printf("t = %p\n",t);
	printf("ft = %p\n", ft);
	printf("dt = %p\n", dt);
	free(t);

	struct coords {
		double x;
		double y;
		double z;
	};
	struct coords r;
	struct coords *rp=&r;

	rp->x=1.50249;rp->y=1.23589;rp->z=1123.491212;
	printf("r(x,y,z)=(%f,%f,%f)",r.x,r.y,r.z);
}
