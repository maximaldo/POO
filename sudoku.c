#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*void crearsudoku(void){
	int nums[3][3] = {
	{1, 2, 3},
	{4, 5, 6},
	{7, 8, 9},
	}
		
}*/

void desordenar(){
	int nums[9]= {1, 2, 3, 4, 5, 6, 7, 8, 9};
	for(int i = 0; i < 50; i++){
		int random1 = rand() % 9;
     	int random2 = rand() % 9;
		nums[random1] = nums[random2];
		nums[random2] = nums[random1];
		
	}
	for(int j = 0; j < 9; j++){
		printf("%d ",nums[j]);
	}
}

int main(int argc, char *argv[]) {
	srand(time(NULL));
	desordenar();
	return 0;
}
