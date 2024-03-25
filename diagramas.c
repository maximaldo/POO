#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int eleccion;
	char opcion = 's';
	int n;
	int n2;
	int n3;
	while(opcion == 's'){
	printf("que hacer:\n");
	scanf("%d", &eleccion);    
	 
	switch(eleccion){
	case 1: 
	printf("pone un numero\n");
	scanf("%d", &n);
	if(n > 0){printf("es positivo");}
	else{printf("es negativo");}
	break;
	
	case 2:
	printf("pone un numero\n");
	scanf("%d", &n); 
	if(n % 2 == 0){printf("es par\n");}
	else{printf("es impar\n");}
	break;
	
	case 3:
	printf("pone un numero\n");
	scanf("%d", &n);
	if(n % 2 == 0 && n % 3 == 0){ printf("es multiplo de 2 y 3\n");}
	else if(n % 2 == 0){printf("es multiplo de 2\n");}
	else if(n % 3 == 0){printf("es multiplo de 3\n");}
	else{printf("no es multiplo ni de 2 ni de 3\n");}	
	break;
	
	case 4:
	printf("pone 3 numeros\n");
	scanf("%d %d %d", &n,&n2,&n3);
	if(n > n2  && n > n3){printf("el primer numero es el mayor\n");}
	else if(n2 > n && n2 > n3){printf("el segundo numero es el mayor\n");}
	else if(n3 > n && n3 > n2){printf("el tercer numero es el mayor\n");}
	else if(n == n2 && n > n3){printf("el primer y segundo numero son los mayores\n\n");}
	else if(n > n2 && n == n3){printf("el primer y tercer numero son los mayores\n");}
	else if(n2 > n && n2 == n3){printf("el segundo y tercer numero son los mayores\n");}
	else if(n2 == n && n2 == n3){printf("son todos iguales\n");}
	break;
    }
    printf("queres elegir otra opcion s/n:\n");
    scanf(" %c", &opcion );
}
return 0;
}
