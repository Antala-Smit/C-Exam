//Write a c program to create program input 2 number which number is minimum find using switch case and using no return with perameter function.

#include<stdio.h>

void main(){
	int num1, num2;
	printf("Enter first no:-");
	scanf("%d",&num1);
	printf("Enter second no:-");
	scanf("%d",&num2);
	minno(num1,num2);
}
void minno(int a,int b){
	switch(a<b) {
		case 1:
			printf("%d is minimum.\n",a);
		break;
		case 0:
			printf("%d is minimum.\n",b);
		break;
		default:
			printf("%d is minimum.\n");
		break;	
	}
}
