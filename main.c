#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//array declareation
	int i, average;
	int sum;
	int grade[SIZE];

	
	printf("input %i score\n", SIZE);
	
	for(i=0;i<SIZE;i++){
		scanf("%d", &grade[i]);	
		sum += grade[i];
	}
		
	for(i=0;i<SIZE;i++)
		printf("grade[%d]=%d\n", i, grade[i]);
		
	
	average = sum/SIZE;
	printf("average : %i\n", average);
	
	
	return 0;
}
