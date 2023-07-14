#include <stdio.h>

int main ( void ) {
const  int N=100;
int arr[N];
int i;
const int l =7;

printf ( "l=%i . \n" , l );
for(i=0; i<2*N ; i++)
	arr[i]=i;
printf ( "l=%i . \n" , l );
return 0;
}
