#include <stdio.h>

float celcius_to_fahr(float c){
		return 1.8f*c+32.0f;
}

double cutoff(double x, double a){
	if(x<=a)
		return a;
	else
		return x;
}

int main(){
	int i,c;
	
	for(i=0;i<=120;i+=12){
		c=i;
		printf("%i:: %f\n",i, celcius_to_fahr(c));
	}		

	printf("%lf", cutoff(11,24));
}
