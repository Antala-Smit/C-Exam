//Write a c program to create two matrix sum in each rows using no return with perameter function.
#include<stdio.h>

void main(){

	int a[50][50],b[50][50],i,j,row,col;
	
	
	printf("Enter A row :-");
	scanf("%d",&row);
	printf("Enter A col :-");
	scanf("%d",&col);
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("a[%d][%d] :-",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter B row :-");
	scanf("%d",&row);
	printf("Enter B col :-");
	scanf("%d",&col);
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("b[%d][%d] :-",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d",a[i][j] + b[i][j]);
		}
		printf("\n");
	}
	
	

}

