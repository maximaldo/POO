#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void ejer1(){
	int n1 = 1;
	int n2 = 2;
	int n3 = 3;
	while(n1+n2+n3 != 87){
	n1++;
	n2++;
	n3++;	
	}
	printf("los tres nums son: %d %d %d",n1,n2,n3);
	}
	
void ejer2(){
	int n1;
	int n2;
	int n3;
	puts("ingrese 3 numeros y te digo el promedio");
	scanf("%d %d %d",&n1,&n2,&n3);
	printf("%.2f",((double)n1+(double)n2+(double)n3)/3);
	}
	
void ejer3(){
	int n1;
	puts("Escribi un num y te digo si es par o impar(que sea positivo)");
	scanf("%d",&n1);
	printf("%s",n1 % 2 == 0 ? "es par":"es impar");
}

void ejer4(){
	int n1;
	int n2;
	int n3;
	int n4;
	int tarea;
	puts("Escribi tus 4 notas y la nota de la tarea");
	scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&tarea);
	if((n1+n2+n3+n4+tarea)/5 >= 6){
		printf("aprobaste");
	} else{
		printf("no aprobaste");
	}
}

void ejer5(){
	int nota;
	puts("escribi tu nota");
	scanf("%d",&nota);
	if(nota >= 8){printf("felicitaciones");}
	else if(nota >= 6){printf("aprobo");}
	else if(nota == 1){printf("debes esforzarte mas");}
	else if(nota < 6){printf("desaprobo");}	
}

void ejer6(){
	int sueldo;
	double impuesto;
	puts("escribi tu sueldo");
	scanf("%d",&sueldo);
	if(sueldo <= 202){impuesto = 0;}
	else if(sueldo <=607){impuesto = (double)sueldo * 0.05;}
	else if(sueldo <=1013){impuesto = (double)sueldo * 0.1;}
	else if(sueldo <=1418){impuesto = (double)sueldo * 0.15;}
	else if(1418 < sueldo){impuesto = (double)sueldo * 0.25;}
	printf("El impuesto es %.2f",impuesto);
	
}
void ejer7(){
	int hora;
	int minutos;
	scanf("%d %d",&hora,&minutos);
	if(hora >= 12){
		hora = hora - 12;
		printf("son las %d:%d PM",hora,minutos);}
		else if(hora < 12){
		printf("son las %d:%d AM",hora,minutos);
		}
	
}

int main(int argc, char *argv[]) {
    ejer7();
	return 0;
}
