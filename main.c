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
int horas;
		int minutos;
		printf("Ingrese la hora: ");
		scanf("%d %d", &horas, &minutos);
		
		if(horas < 13) {
			if(horas == 0) {
				printf("%d:%d AM", horas + 12, minutos);
			}
			else {
			printf("%d:%d AM", horas, minutos);
			}
		}
 		if(horas > 12) {
			if(horas == 12) {
				printf("%d:%d PM", horas, minutos);
		}
			else {
				printf("%d:%d PM ", horas - 12, minutos);
		}
		}
       	 printf("\n");
         system("pause");
	}
	
void ejer8(){
	puts("Escribi tu inversion");
	int inversion;
	scanf("%d",&inversion);
	int ahorro = inversion + inversion * 0.02;
	printf("Invirtio un total de %d y ahorro en total %d",inversion,ahorro);	
	
}
void ejer9(){
	int padre = 50;
	int hijo = 20;
	int i;
    while((padre+1) / 2 != hijo){
    	hijo++;
    	padre++;
    	i++;
	}
	printf("dentro de %d tendra el hijo la mitad de la edad del padre, el hijo tendra %d y el padre %d",i,hijo,padre);
}

void ejer10(){
	puts("decime unos segundos y los paso a horas");
	int ingreso;
	int segundos;
	int minutos;
	int horas;
	scanf("%d",&ingreso);
	
    horas = ingreso / 3600;
    minutos = (ingreso % 3600) / 60;
    segundos = ingreso % 60;
	printf("%d:%d:%d",horas,minutos,segundos);
}

void ejer11(){
	int CalPar1;
	int CalPar2;
	int CalPar3;
	int examf;
	int trabf;
	int calificacion;
	
	puts("escribi tus 3 calificaciones parciales");
	scanf("%d %d %d",&CalPar1,&CalPar2,&CalPar3);
	puts("Ahora la calificacion del examen final y trabajo final");
    scanf("%d %d",&examf,&trabf);
    calificacion = ((CalPar1 + CalPar2 + CalPar3) / 3) * 0.55 + examf * 0.3 + trabf * 0.15;
    printf("Su clasificacion final es: %d",calificacion);
}

void ejer12(){
	int base;
	int venta1;
	int venta2;
	int venta3;
	double total;
	double comision;
    puts("Escribir el sueldo base y el valor de las 3 ventas");
	scanf("%d %d %d %d",&base,&venta1,&venta2,&venta3);
	comision = (double)venta1 * 0.10 + (double)venta2 * 0.10 + (double)venta3 * 0.10;
	total = comision + base;
	printf("El pago por la comision es %.2f y el total que va recibir es %.2f", comision,total);
}

void ejer13(){
	puts("Escribi el precio de tu compra");
	int compra;
	int result;
	scanf("%d",&compra);
	result = compra - compra * 0.15;
	printf("el precio a pagar es :%d",result);
}

void ejer14(){
	int numero;
	puts("escribi tu numero");
	scanf("%d",&numero);
	if(numero < 0){
    numero *= -1;
	}
	printf("el valor absoluto de tu numero es %d",numero);
}

void ejer15(){
	int hombres;
	int mujeres;
	puts("ingreses la cantidad de hombres y mujeres");
	scanf("%d %d",&hombres,&mujeres);
	int total = hombres + mujeres;
	double porcentajeH = (hombres*100)/(double)total;
	double porcentajeM= (mujeres*100)/(double)total;
	printf("Porcentaje de hombres %.2f y de mujeres %.2f",porcentajeH,porcentajeM);
	
}	
void ejer16(){
    int pesos;
    int unidad;
    puts("Escribime la cantidad de pesos que deseas convertir");
    scanf("%d",&pesos);
    puts("ahora la unidad cambiaria");
    scanf("%d",&unidad);
    printf("%d pesos son en total %.2f dolares",pesos,(double)pesos / (double)unidad);
}

void ejer17(){
	int edad;
	double peso;
	char genero;
	puts("escribi tu edad");
	scanf("%d",&edad);
	puts("ahora tu peso");
	scanf("%lf",&peso);
	puts("Elegi genero masculino o femenino con una letra");
	scanf(" %c",&genero);
    double nashe;
	if(genero == 'm'){
    nashe = ((210 - (0.5 * edad)) - peso * 0.01) + 4;
	}else if(genero == 'f'){
	nashe =  ((210 - (0.5 * edad)) - peso * 0.01);
	}
	printf("tu frecuencia maxima cardiaca es:%.2f",nashe);	
}


int main(){
    int eleccion;
	puts("escribi el numero del ejercicio");
	scanf("%d",&eleccion);
   switch(eleccion){
   	case 1:
   		ejer1();
   	case 2:
   		ejer2();
   	case 3:
   		ejer3();
   	case 4:
   		ejer4();
   	case 5:
   		ejer5();
   	case 6:
   		ejer6();
   	case 7:
   		ejer7();
   	case 8:
   		ejer8();
   	case 9:
   		ejer9();
   	case 10:
   		ejer10();
   	case 11:
   		ejer11();
   	case 12:
   		ejer12();
   	case 13:
   		ejer13();
   	case 14:
   		ejer14();
   	case 15:
   		ejer15();
   	case 16:
   		ejer16();
   	case 17:
   		ejer17();
   }
}
