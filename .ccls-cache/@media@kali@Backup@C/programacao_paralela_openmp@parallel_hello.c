#include <stdio.h>
#include <omp.h>

int main(){
	int ID;
	#pragma omp parallel
	{
		ID = omp_get_thread_num();
		printf("hellow(%d)\n",ID);
		printf("hellow(%d)\n",ID);
	}
}
