#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ingreso;
	scanf("%d",&ingreso);
	while(ingreso != 1){
		if(ingreso % 2 == 0){
		ingreso = ingreso / 2;	
		}
	    else{
	    	ingreso = ingreso * 3 + 1;
		}
		printf("%d\n",ingreso);
		}
		return 0;
}
