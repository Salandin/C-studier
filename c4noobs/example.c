#include <stdio.h>

float celcius_to_far(float c){
    return 1.8f*c+32.0f;
}


int main(void) 
{
    int i;
    for(i=0;i<=100;i+=10){
        printf("%i %f \n",i, celcius_to_far(i));
    }
    return 0;
}
