#include <stdio.h>
#include <math.h>

struct vector {
	double x,y,z;
};

double produto_escalar(struct vector a, struct vector b){
	return (a.x*b.x)+(a.y*b.y)+(a.z*b.z);
}

int main(){
	struct vector vetor1, vetor2;

	vetor1.x=1.000;
	vetor1.y=1.000;
	vetor1.z=1.000;

	vetor2.x=4.000;
	vetor2.y=3.200;
	vetor2.z=4.230;

	printf("produtor escalar dos dois vetores e:: %f\n", produto_escalar(vetor1, vetor2));

	printf("%e\n", sqrt(1123.44392374));

	
}
