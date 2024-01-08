//Write a c program to two variable swap using all function

#include<stdio.h>

void main(){
	
	int a=10,b=30;
	swap(&a, &b);
	
}

int swap(int *a, int *b){
	int c;
	
	c=*a;
	*a=*b;
	*b=c;
	
	printf("Value of A :- %u\n", *a);
	printf("Value of B :- %u\n", *b);
}
