#include<stdio.h>
#include<string.h>

int main(){
	float x;
	float y;
    float *one;
    float *two;
    one = &x;
    two = &y;
    printf("Before reverse: a = %f, b = %f\n", *one,*two);
    one = &y;
    two = &x;
    printf("After reverse: a = %f, b = %f\n", *one,*two);
    return 0;
}