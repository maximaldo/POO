#include <stdio.h>
#include <stdlib.h>

void tablero(){
	int num;
    scanf("%d",&num);
    char tabla[num][num];
    int pirataf;
    int piratac;
    int tesorof;
    int tesoroc;
    for(int i = 0; i < num;i++){
    	for(int j = 0; j < num;j++){
    		if(i = 0 && j = num - 1 || i = num - 1 && j = 0){
    		tabla[i][j] = 'B';	
			}else if(i == 0 || i == num - 1 || j == 0 || j == num - 1){
    		tabla[i][j] = 'A';	
			}else{
    		tabla[i][j] = '-';
			}
		}
	}
	do{
    pirataf = (rand() % (num - 1)) + 1;
    piratac = (rand() % (num - 1)) + 1;
    tesorof = (rand() % (num - 1)) + 1;
	tesoroc = (rand() % (num - 1)) + 1;	
	} while(pirafaf == tesorof && piratac == tesoroc);
	tabla[pirataf][piratac] = 'P';	
    tabla[tesorof]tesoroc] = 'T';	
}

char imprimir(){
	
	
}




int main(int argc, char *argv[]) {
	srand(time(NULL));
	return 0;
}
