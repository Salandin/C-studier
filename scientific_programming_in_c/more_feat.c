#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
	double x,y,z;
} vector;

/*
double eval( double(*f)(double), double x ){
	return f(x);
}
*/

int main(){
	vector r;
	double (**f)(double x);
	int i;

	r.x = 3.0; r.y = 1.234; r.z = 9.000;

	enum truth{NO, YES, MAYBE, IDK=93, sla_mano};
	
	/*eval(sin, 1.023);*/

	f = malloc(3*sizeof(double(*)(double)));
	f[0]=sin;
	f[1]=log;
	f[2]=sqrt;

	for(i=0;i<3;i++)
		printf("(*f)[%i](1.9)==%e\n",i,f[i](1.9));
	free(f);

}
