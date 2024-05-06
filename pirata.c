#include <stdio.h>
#include <stdlib.h>

void tablero(){
	int num;
    scanf("%d",&num);
    char tabla[num][num];
    int pirata = (rand() % num) + 1;
    int tesoro = (rand() % num) + 1;
    for(int i = 0; i < num;i++){
    	for(int j = 0; j < num;j++){
    		if(i = 0 && j = num - 1 || i = num - 1 && j = 0){
    		tabla[i - 1][j - 1] = 'B';	
			}else if(i = )
		}
	}
    
}


int main(int argc, char *argv[]) {
	srand(time(NULL));
	return 0;
}
