#include <stdio.h>
#include <stdlib.h>
#define ROWS	3
#define COLS	3

void printMatrix(int A[][COLS]);
void addMatrix(int A[][COLS],int B[][COLS],int C[][COLS]);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void sqaure_array(int a[], int size);
void print_array(int a[], int size);


int main(int argc, char *argv[]) {
	
	//array declareation
	int A[ROWS][COLS]= {
		{2,3,0},
		{8,9,1},
		{7,0,5}};
		
	int B[ROWS][COLS]= {
		{1,1,0},
		{0,1,1},
		{0,0,1}};
	
	int C[ROWS][COLS];
	
	addMatrix(A,B,C);
	printMatrix(C);
	
	return 0;
}

void addMatrix(int A[][COLS],int B[][COLS],int C[][COLS]){
	int i, j;
	
	//C = A+B
	for(i=0;i<ROWS;i++)
		for(j=0;j<COLS;j++)
			C[i][j]=A[i][j]+B[i][j];
}
void printMatrix(int A[][COLS]){
	//print using loop
	int i, j;
	
	for(i=0;i<ROWS;i++)
	{
		
		for(j=0;j<COLS;j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}
		
}
