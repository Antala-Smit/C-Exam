//Write a c program to create array a[50] = {10,20,30,45,50} and 45 value change in 40 value.

#include<stdio.h>

void main(){
	int a[50]={10,20,30,45,50},value=40,i;
	
	for(i=0;i<5;i++){
		a[3]=value;
		printf("a[%d] :- %d \n ",i,a[i]);
	}
}
