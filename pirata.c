#include <stdio.h>
#include <stdlib.h>

void tablero(){
	int num;
	printf("Escribi el numero del tamaño del tablero\n");
    scanf("%d",&num);
    char tabla[num][num];
    int pirataf;
    int piratac;
    int tesorof;
    int tesoroc;
    for(int i = 0; i < num;i++){
    	for(int j = 0; j < num;j++){
    		if(i == 0 && j == num - 1 || i == num - 1 && j == 0){
    		tabla[i][j] = 'B';	
			}else if(i == 0 || i == num - 1 || j == 0 || j == num - 1){
    		tabla[i][j] = 'A';	
			}else{
    		tabla[i][j] = '-';
			}
		}
	}
	do{
    pirataf = (rand() % (num - 2)) + 1;
    piratac = (rand() % (num - 2)) + 1;
    tesorof = (rand() % (num - 2)) + 1;
	tesoroc = (rand() % (num - 2)) + 1;	
	} while(pirataf == tesorof && piratac == tesoroc);
	tabla[pirataf][piratac] = 'P';	
    tabla[tesorof][tesoroc] = 'T';
	imprimir(num,tabla);
}

void imprimir(int num,char tabla[num][num]){
for(int i = 0; i < num;i++){
	for(int j = 0; j < num;j++){
		printf("%c",tabla[i][j]);
	}
	printf("\n");
}	
}




int main(int argc, char *argv[]) {
	tablero();
	srand(time(NULL));
	return 0;
}
